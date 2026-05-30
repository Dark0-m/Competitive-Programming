#include <bits/stdc++.h>

std::vector<std::vector<int>> all_combinations;
std::vector<int> current;

void combinations(int start, int desired_sum, int& sum, std::vector<int>& current, std::vector<int>& weights){
    if(sum == desired_sum){
        all_combinations.push_back(current);
        return;
    }

    for(int i = start; i < weights.size(); i++){
        if(sum + weights[i] > desired_sum) continue;

        sum += weights[i];
        current.push_back(weights[i]);

        combinations(i + 1, desired_sum, sum, current, weights);

        current.pop_back();
        sum -= weights[i];
    }
}

int main(){


    int target_w = 12;
    int sum = 0;

    std::vector<int> weights = {2, 4, 6, 10};

    combinations(0, target_w, sum, current, weights);

    for(auto t : all_combinations){
        for(auto c : t){
            std::cout << c << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}