#include <bits/stdc++.h>

using ll = long long;

ll find_lucky(ll n){
    std::vector<ll> digits;

    int last_digit;

    while(n > 0){
        last_digit = n % 10;
        digits.push_back(last_digit);
        n /= 10;
    }

    std::sort(digits.begin(), digits.end());

    return digits[digits.size() - 1] - digits[0];
}

ll find_lucky_pairs(ll n1, ll n2){

    int max_index = 0;
    std::vector<std::pair<ll, ll>> pairs;

    for(int i = n1; i <= n2; i++){
        pairs.push_back(std::pair(i, find_lucky(i)));
    }

    for(int i = 0; i < pairs.size(); i++){
        if(pairs[i].second > pairs[max_index].second) max_index = i;
    }



    return pairs[max_index].first;
}

int main(){

    int t;

    std::cin >> t;

    std::vector<std::pair<ll, ll>> pairs(t);

    for(auto& p : pairs){
        std::cin >> p.first >> p.second;
    }

    for(auto& p : pairs){
        std::cout << find_lucky_pairs(p.first, p.second) << '\n';
    }


    return 0;
}