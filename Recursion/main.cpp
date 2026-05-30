#include <bits/stdc++.h>

int count_ways(int n){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }

    
    return count_ways(n - 1) + count_ways(n - 2);
}

int main(){


    std::cout << count_ways(4);


    return 0;
}