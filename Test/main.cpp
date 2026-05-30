#include <bits/stdc++.h>



int main(){

    std::vector<int> digits;

    int n;
    std::cin >> n;

    int last_digit = 0;

    while (n > 0){
        last_digit = n % 10;
        digits.push_back(last_digit);
        n /= 10;
    }

    for(auto n : digits){
        std::cout << n << " ";
    }

    return 0;
}