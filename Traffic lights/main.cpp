#include <bits/stdc++.h>

int check_length(std::vector<long long> lights){
    
    long long max = 0;
    for(size_t i = 0; i < lights.size() - 1; i++){
        max = std::max(lights[i + 1] - lights[i], max);
    }
    return max;
}

int main(){


    long long x, n;

    std::cin >> x >> n;

    std::vector<long long> lights;

    lights.push_back(0);

    long long temp;
    for(long long i = 0; i < n; i++){
        std::cin >> temp;
        lights.push_back(temp);
        lights.push_back(x);
        std::sort(lights.begin(), lights.end());
        std::cout << check_length(lights) << " ";
        lights.pop_back();
    }

    lights.push_back(x);

    return 0;
}