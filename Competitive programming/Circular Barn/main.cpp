#include<bits/stdc++.h>

typedef long long ll;

int calc_dist(std::vector<int> vals, ll total_cows){

    int total_distance = 0;
    for(auto v : vals){
        total_cows -= v;
        total_distance += total_cows;
    }
    return total_distance;
}

std::vector<int> perf_room(std::vector<std::pair<int, int>> r_i, int n, int start_pos){
    std::vector<int> vals;
    for(int i = 0; i < n; i++){
        if(start_pos >= n){
            start_pos = 0;
        }
        vals.push_back(r_i[start_pos].second);
        start_pos++;
    }

    return vals;
}

int main(){

    int n;
    ll total_cows = 0;

    std::cin >> n;
    std::vector<std::pair<int, int>> r_i;

    int temp = 0;
    for(int i = 1; i <= n; i++){
        std::cin >> temp;
        total_cows += temp;
        r_i.push_back(std::pair(i, temp));
    }

    std::vector<int> vals;
    
    int min = calc_dist(perf_room(r_i, n, 0), total_cows);
    for(int i = 0; i < n; i++){
        min = std::min(calc_dist(perf_room(r_i, n, i), total_cows), min);
    }

    std::cout << min;
    return 0;
}