#include <bits/stdc++.h>


struct Round_data{
    int a, b, g;
};


int play(std::vector<Round_data> rounds, int starting_pos){

    int score = 0;

    std::vector<int> shells(3);

    shells[starting_pos - 1] = 1;

    for(auto& round : rounds){
        std::swap(shells[round.a - 1], shells[round.b - 1]);
        if(shells[round.g - 1] == 1) score++;
    }

    return score;
}


int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int number_of_swaps;
    
    std::vector<Round_data> rounds;

    std::cin >> number_of_swaps;

    int a, b, g;

    Round_data temp;

    for(int i = 0; i < number_of_swaps; i++){
        std::cin >> temp.a >> temp.b >> temp.g;
        rounds.push_back(temp);
    }

    int max_score = 0;
    int current_score;

    for(int i = 1; i <= 3; i++){
        current_score = play(rounds, i);
        if(current_score > max_score) max_score = current_score;
    }

    std::cout << max_score;

    return 0;
}