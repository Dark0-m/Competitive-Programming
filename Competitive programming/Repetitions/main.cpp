#include <bits/stdc++.h>


int main(){

    std::string dna;
    std::cin >> dna;

    int max = 0;
    int temp_max = 0;

    for(int i = 0; i < dna.size(); i++){

        if(i + 1 >= dna.size()){
            std::cout << max + 1;
            return 0;
        }

        if(dna[i] == dna[i + 1]){
            temp_max++;
        }

        if(temp_max > max){
            max = temp_max;
        }

        if(dna[i] != dna[i + 1]){
            temp_max = 0;
        }

    }



    return 0;
}