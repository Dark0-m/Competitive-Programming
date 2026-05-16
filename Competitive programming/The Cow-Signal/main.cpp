#include <bits/stdc++.h>


int main(){

    int m, n, k;

    std::cin >> m >> n >> k;
    std::vector<std::string> sequence(m);

    for(auto& s : sequence){
        std::cin >> s;
    }

    std::cout << '\n';

    for(int i = 0; i < m * k; i++){
        for(int j = 0; j < n * k; j++){
            std::cout << sequence[i / k][j / k];
        }
        std::cout << '\n';
    }

    return 0;
}