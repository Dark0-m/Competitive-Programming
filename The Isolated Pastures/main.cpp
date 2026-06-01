#include <bits/stdc++.h>

int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};

void flood_fill(int r, int c, std::vector<std::string>& map){

    if(map[r][c] == '#') return;
    if(r < 0 || c < 0 || r >= map.size() || c >= map[0].size()) return;

    map[r][c] = '#';

    for(int i = 0; i < 4; i++){
        int next_dr = r + dr[i];
        int next_dc = c + dc[i];

        flood_fill(next_dr, next_dc, map);
    }

    return;
}



int main(){

    int r, c;

    std::cin >> r >> c;

    std::string temp;

    std::vector<std::string> map;

    for(int i = 0; i < r; i++){
        std::cin >> temp;
        map.push_back(temp);
    }

    int count = 0;

    for(int r = 0; r < map.size(); r++){
        for(int c = 0; c < map[0].size(); c++){
            if(map[r][c] == '.'){
                count++;
                flood_fill(r, c, map);
            }
        }
    }

    std::cout << count;

    return 0;
}