#include <bits/stdc++.h>

bool find_reccurence(std::string column_spotty, std::string column_plain){
    for(auto s : column_spotty){
        for(auto p : column_plain){
            if(s == p) return true;
        }
    }
    
    return false;
}


int find_count(std::vector<std::string> spotty_cows, std::vector<std::string> plain_cows, int m){

    std::vector<std::string> column_spotty;
    std::vector<std::string> column_plain;

    std::string temp = "";

    for(int i = 0; i < m; i++){
        for(int j = 0; j < spotty_cows.size(); j++){
            temp += spotty_cows[j][i];
        }

        column_spotty.push_back(temp);
        temp = "";
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < plain_cows.size(); j++){
            temp += plain_cows[j][i];
        }

        column_plain.push_back(temp);
        temp = "";
    }

    int count = 0;

    for(int i = 0; i < column_spotty.size(); i++){
        if(!find_reccurence(column_spotty[i], column_plain[i])){
            count++;
        }
    }

    return count;
}

int main(){


    int n, m;

    std::cin >> n >> m;

    std::vector<std::string> spotty_cows;
    std::vector<std::string> plain_cows;

    std::string temp;

    for(int i = 0; i < 2 * n; i++){
        if(i < n){
            std::cin >> temp;
            spotty_cows.push_back(temp);
            continue;
        }

        std::cin >> temp;
        plain_cows.push_back(temp);
    }

    std::cout << find_count(spotty_cows, plain_cows, m);
    
    return 0;
}