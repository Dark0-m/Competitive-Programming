#include<bits/stdc++.h>

std::vector<std::vector<char>> all_combinations;
std::vector<char> current;

void combinations(int start, int k, int n, std::vector<char>& current, std::vector<char>& input){
    if(current.size() == k){
        all_combinations.push_back(current);
        return;
    }

    for(int i = start; i < n; i++){
        current.push_back(input[i]);

        combinations(i + 1, k, n, current, input);

        current.pop_back();
    }
}



int main(){

    std::string input;
    std::vector<char> letters;
    int k;

    std::vector<char> current;

    std::cin >> input >> k;

    for(auto c : input){
        letters.push_back(c);
    }

    combinations(0, k, letters.size(), current, letters);

    for(auto v : all_combinations){
        for(auto c : v){
            std::cout << c;
        }
        std::cout << '\n';
    }


    return 0;
}