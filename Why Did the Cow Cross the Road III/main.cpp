#include <bits/stdc++.h>

struct cow{
    int a;
    int d;
};

int shortest_time(std::vector<cow>& cows){
    int curr_time = 0;
    int last_time = 0;

    //SCRAP EVERYTHING
    //USE VAR LAST TIME

    for(int i = 0; i < cows.size(); i++){
        if(cows[i].a < last_time){
            curr_time = last_time + cows[i].d;
            last_time = curr_time;
            continue;
        }

        curr_time = cows[i].a + cows[i].d;
        last_time = curr_time;
    }

    return curr_time;
}

bool compare_arrival(const cow& x, const cow& y) {
    return x.a < y.a;
}

int main(){

    int n;

    std::cin >> n;

    std::vector<cow> cows;
    std::vector<cow> sorted_cows;
    cows.resize(n);
    sorted_cows;

    for(auto& cow : cows){
        std::cin >> cow.a >> cow.d;
    }

    std::sort(cows.begin(), cows.end(), compare_arrival);

    std::cout << '\n' << shortest_time(cows);

    return 0;
}