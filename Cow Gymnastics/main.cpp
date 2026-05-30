#include <bits/stdc++.h>

bool placement(std::vector<int> v, int i, int j){
    auto it = std::find(v.begin(), v.end(), i);
    auto it_1 = std::find(v.begin(), v.end(), j);

    return std::distance(v.begin(), it) < std::distance(v.begin(), it_1);
}

int find_pairs(std::vector<std::vector<int>> lines, int n, int test_cases){
    int answer = 0;
    int check = 0;
    

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= n; j++){

            for(int k = 0; k < lines.size(); k++){
                if(placement(lines[k], i, j) && i != j) check++;
            }

            if(check == test_cases) answer++;
            check = 0;
        }

    }


    return answer;
}

int main(){

    int k, n;

    std::cin >> k >> n;

    std::vector<std::vector<int>> lines;

    std::vector<int> temp(n);

    for(int i = 0; i < k; i++){
        for(auto& num : temp){
            std::cin >> num;
        }
        lines.push_back(temp);
    }

    std::cout << find_pairs(lines, n, k);

    return 0;
}