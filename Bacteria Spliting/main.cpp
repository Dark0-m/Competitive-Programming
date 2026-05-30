#include <bits/stdc++.h>

int count_steps(int steps){
    if(steps < 0) return 0;
    if(steps == 0) return 1;

    return count_steps(steps - 1) + count_steps(steps - 2) + count_steps(steps - 3);
}


int main(){

    int n;
    while(n != -1){
        std::cin >> n;
        std::cout << count_steps(n) << '\n';
    }


    return 0;
}