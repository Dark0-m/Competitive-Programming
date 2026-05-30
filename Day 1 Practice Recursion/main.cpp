#include <bits/stdc++.h>

using ll = long long;

ll factorial(ll n){
    if(n == 1 || n == 0){
        return 1;
    } 
    if(n < 0) return 0;

    return n * factorial(n - 1);
}

int main(){


    std::cout << factorial(5);

    return 0;
}