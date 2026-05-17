#include <bits/stdc++.h>

int fib_seq(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib_seq(n - 1) + fib_seq(n - 2);
}


int main(){

    int n = 0;

    while(n != -1){
        std::cin >> n;
        std::cout << fib_seq(n) << '\n';
    }


    return 0;
}