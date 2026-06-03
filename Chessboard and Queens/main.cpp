#include <bits/stdc++.h>

int count = 0;
int count_of_solutions = 0;

std::string x_fill = "********";

void fill_map(std::vector<std::string>& map, std::pair<int, int> coord) {
    int r = coord.first;
    int c = coord.second;

    for(int i = 0; i < 8; i++) {
        map[r][i] = '*';
    }

    for(int i = 0; i < 8; i++) {
        map[i][c] = '*';
    }

    for (int curr_r = r, curr_c = c; curr_r < 8 && curr_c < 8; curr_r++, curr_c++) {
        map[curr_r][curr_c] = '*';
    }

    for (int curr_r = r, curr_c = c; curr_r >= 0 && curr_c >= 0; curr_r--, curr_c--) {
        map[curr_r][curr_c] = '*';
    }

    for (int curr_r = r, curr_c = c; curr_r < 8 && curr_c >= 0; curr_r++, curr_c--) {
        map[curr_r][curr_c] = '*';
    }

    for (int curr_r = r, curr_c = c; curr_r >= 0 && curr_c < 8; curr_r--, curr_c++) {
        map[curr_r][curr_c] = '*';
    }
}


void place_queen(int row, std::vector<std::string> map) {
    if (row == 8) {
        count_of_solutions++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (map[row][col] == '*') continue;

        std::vector<std::string> next_map = map;
        fill_map(next_map, {row, col});

        place_queen(row + 1, next_map);
    }
}



int main(){

    std::string input;
    std::vector<std::string> map;

    for(int i = 0; i < 8; i++){
        std::cin >> input;
        map.push_back(input);
    }
    
    std::cout << '\n';
    place_queen(0, map);
    std::cout << count_of_solutions;

    return 0;
}