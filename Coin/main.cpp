#include <bits/stdc++.h>

using ll = long long;

ll possible_combinations(int n){
    if(n == 0) return 1;
    if (n < 0) return 0;

    return (possible_combinations(n - 1) + possible_combinations(n - 5) + 
           possible_combinations(n - 10) + possible_combinations(n - 25) + 
           possible_combinations(n - 50));
}


int main(){

    std::cout << possible_combinations(100);


    return 0;
}