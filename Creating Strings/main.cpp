#include <bits/stdc++.h>

std::set<std::string> all_perm;
std::string curr;


void generate_permutations(std::string& curr, std::string& k, std::vector<bool>& taken){
    if(curr.size() == k.size()){
        all_perm.insert(curr);
        return;
    }

    for(int i = 0; i < k.size(); i++){
        if(taken[i]) continue;

        curr.push_back(k[i]);

        taken[i] = true;

        generate_permutations(curr, k, taken);

        taken[i] = false;

        curr.pop_back();
    }
}


int main(){

    std::string k;

    std::cin >> k;

    std::vector<bool> taken(k.size(), false);

    generate_permutations(curr, k, taken);

    std::cout << all_perm.size() << '\n';

    for(auto c : all_perm){
        std::cout << c << '\n';
    }

    return 0;
}