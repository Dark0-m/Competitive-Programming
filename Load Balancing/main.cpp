#include <bits/stdc++.h>



int main(){

    int n, s;

    std::cin >> n >> s;

    std::vector<std::pair<int, int>> points(n);

    for(auto& p : points){
        std::cin >> p.first >> p.second;
    }

    int min = n;
    int a, b;

    std::vector<int> x_coords;
    for(auto p : points) x_coords.push_back(p.first);

    std::sort(x_coords.begin(), x_coords.end());
    x_coords.erase(unique(x_coords.begin(), x_coords.end()), x_coords.end());


    std::vector<int> y_coords;
    for(auto p : points) y_coords.push_back(p.second);

    std::sort(y_coords.begin(), y_coords.end());
    y_coords.erase(unique(y_coords.begin(), y_coords.end()), y_coords.end());

    int max = 0;

    for(auto x : x_coords){
        for(auto y : y_coords){
            a = x + 1;
            b = y + 1;

            int ul = 0;
            int ur = 0;
            int dl = 0;
            int dr = 0;

            for(auto p : points){
                if(p.first < a && p.second > b) ul++;
                if(p.first > a && p.second > b) ur++;
                if(p.first < a && p.second < b) dl++;
                if(p.first > a && p.second < b) dr++;
            }

            max = std::max(std::max(ul, ur), std::max(dl, dr));
            min = std::min(min, max);
        }

        
    }


    std::cout << min;

    
    return 0;
}