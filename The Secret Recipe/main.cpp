#include <bits/stdc++.h>

using ll = long long;

//first : flavor
//second : sweetness

ll secret_recipe(int index, ll flavor, ll sweetness, bool picked, std::vector<std::pair<ll, ll>>& ing){
    if(index == ing.size()){
        if(!picked) return 2e18;
        return abs(flavor - sweetness);
    }

    ll take = secret_recipe(index + 1, flavor * ing[index].first, sweetness, true, ing);
    ll leave = secret_recipe(index + 1, flavor, sweetness + ing[index].second, picked, ing);

    return std::min(take, leave);
}

int main(){

    int n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> ing(n);

    for(auto& p : ing){
        std::cin >> p.first >> p.second;
    }

    std::cout << secret_recipe(0, 1, 0, false, ing);

    return 0;
}