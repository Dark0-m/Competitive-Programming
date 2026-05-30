#include <bits/stdc++.h>

typedef long long ll;

int main(){

    long long n;

    std::cin >> n;

    std::vector<long long> nums(n - 1);

    for(auto &x : nums){
        std::cin >> x;
    }

    if(n - 1 == 1){
        if(nums[0] != 1){
            std::cout << 1;
        }
        else{
            std::cout << 2;
        }
        return 0;
    }

    std::sort(nums.begin(), nums.end());

    for(long long i = 0; i < ll(nums.size()); i++){
        if(nums[i] + 1 != nums[i + 1]){
            std::cout << nums[i] + 1;
            return 0;
        }
    }

    return 0;
}