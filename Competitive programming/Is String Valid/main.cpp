#include <bits/stdc++.h>

bool is_string_valid(std::string n){
    if(n.empty()) return true;
    if(n.size() % 2 != 0) return false;

    bool valid = false;
    if(n.front() != 'A' || n.back() != 'T'){
        return false;
    }

    return is_string_valid(n.substr(1, n.length() - 2));
}

// ATAT



int main(){

    std::string n;
    std::cin >> n;

    std::cout << is_string_valid(n) ? "TRUE" : "FALSE";



    return 0;
}