#include <bits/stdc++.h>

std::vector<int> subset_example = {1, 2};
std::vector<std::vector<int>> complete_subset;


void generate_subset(int index, std::vector<int>& current_subset){
    if(index == subset_example.size()){
        complete_subset.push_back(current_subset);
        return;
    }
    
    // LEFT
    current_subset.push_back(subset_example[index]);
    generate_subset(index + 1, current_subset);
    current_subset.pop_back();
    generate_subset(index + 1, current_subset);

    //RIGHT

    return;
}



int main(){
    
    std::vector<int> curr_sub;
    generate_subset(0, curr_sub);

    for(auto& p : complete_subset){
        for(auto& z : p){
            std::cout << z << ' ';
        }

        std::cout << '\n';
    }
}