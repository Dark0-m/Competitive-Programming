#include <bits/stdc++.h>


int main(){

    int n;
    std::cin >> n;

    std::vector<int> x(n);
    std::vector<int> y(n);

    for(auto& x : x){
        std::cin >> x;
    }

    for(auto& y : y){
        std::cin >> y;
    }


    int max = 0;
    int dx, dy;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            max = std::max(max, dx * dx + dy * dy);
        }
    }


    std::cout << max;

    return 0;
}