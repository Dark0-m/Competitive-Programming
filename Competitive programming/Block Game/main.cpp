#include <bits/stdc++.h>

int find_letter_count(std::string s, char perf_letter){
    int count = 0;
    for(char c : s){
        if (c == perf_letter) count++;
    }
    return count;
}

int find_count(std::vector<std::pair<std::string, std::string>> pairs, char letter){

    int count_1 = 0;
    int count_2 = 0;
    int sum = 0;

    for(int i = 0; i < pairs.size(); i++){
        count_1 = find_letter_count(pairs[i].first, letter);
        count_2 = find_letter_count(pairs[i].second, letter);
        sum += std::max(count_1, count_2);
    }

    return sum;
}

int main(){

    int n;
    std::cin >> n;

    std::vector<std::pair<std::string, std::string>> pairs(n);

    for(auto& pair : pairs){
        std::cin >> pair.first >> pair.second;
    }

    char letters[27] = {"abcdefghijklmnopqrstuvwxyz"};
    std::vector<int> counts;

    for(auto c : letters){
        counts.push_back(find_count(pairs, c));
    }

    counts.pop_back();

    for(auto c : counts){
        std::cout << c << '\n';
    }

    return 0;
}