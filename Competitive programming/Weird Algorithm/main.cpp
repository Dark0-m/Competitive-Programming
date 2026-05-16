#include <bits/stdc++.h>

int main(){

    long long n;
    std::cin >> n;

    std::cout << n << " ";

    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            std::cout << n << " ";
        }
        else{
            n *= 3;
            n++;
            std::cout << n << " ";
        }
    }

    return 0;
}