#include <bits/stdc++.h>

int count_bacteria(int minutes){
    if(minutes < 0) return 0;
    if(minutes == 0) return 1;

    return count_bacteria(minutes - 1) + count_bacteria(minutes - 2);
}


int main(){

    int n;
    while(n != -1){
        std::cin >> n;
        std::cout << count_bacteria(n) << '\n';
    }


    return 0;
}