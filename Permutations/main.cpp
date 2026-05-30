#include <bits/stdc++.h>


int main(){

    long long n;
    std::cin >> n;

    std::vector<long long> odds;
    std::vector<long long> evens;

    std::vector<long long> answer;

    switch(n){
        case 1:
            std::cout << 1;
            return 0;
        case 2:
            std::cout << "NO SOLUTION";
            return 0;
        case 3:
            std::cout << "NO SOLUTION";
            return 0;
    }

    for(int i = 2; i <= n; i += 2){
        std::cout << i << " ";
    }

    for(int i = 1; i <= n; i += 2){
        std::cout << i << " ";
    }

    

    return 0;
}