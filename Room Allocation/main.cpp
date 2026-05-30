#include <bits/stdc++.h>

typedef long long ll;

struct customer{
    ll a, b;
    ll id_room;
};


int main(){

    std::vector<ll> answers;
    std::vector<customer> customers;
    
    ll a, b, n;

    std::cin >> n;
    customer temp;

    if(n == 1) {
        std::cout << 1 << "\n1";
    };

    for(ll i = 1; i <= n; i++){
        std::cin >> a >> b;
        temp.a = a;
        temp.b = b;
        temp.id_room = i;
        customers.push_back(temp);
    }

    answers.push_back(1);
    
    bool found_solution = false;

    for(ll i = 1; i < customers.size(); i++){
        found_solution = false;
        for(ll j = i - 1; j >= 0; j--){
            if(customers[i].a > customers[j].b){
                answers.push_back(customers[j].id_room);
                found_solution = true;
            }
        }
        if(!found_solution){
            answers.push_back(customers[i].id_room);
        }
    }

    std::set<ll> size_a;
    for(auto n : answers){
        size_a.insert(n);
    }

    std::cout << size_a.size() << '\n';
    for(auto s : answers){
        std::cout << s << ' ';
    }


    return 0;
}