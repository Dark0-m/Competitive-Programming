#include <bits/stdc++.h>

struct d_2{
    long long x;
    long long y;
};

int main(){

    int t;

    std::cin >> t;

    std::vector<d_2> dimensions;

    int x = 1;
    int y = 1;

    int x_inc = 0;
    int y_inc = 0;

    for(int i = 0; i < t; i++){
        d_2 temp;

        std::cin >> temp.x;
        std::cin >> temp.y;

        dimensions.push_back(temp);
    }

    // 2 3


    //YOU ARE ON THE RIGHT TRACK

    for(auto d : dimensions){

        for(int i = 1; i < d.x; i++){
            if(i % 2 != 0){
                x++;
            }
            else{
                x += (7 + x_inc);
                x_inc += 8;
            }
        }

        std::cout << "X : " << x << "\n";

        for(int i = 1; i < d.y; i++){
            std::cout << "SKIPPED\n";
        }
        
        x = 1;
        y = 1;

    }

    return 0;
}