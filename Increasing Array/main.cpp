#include <bits/stdc++.h>


int main(){

    long long n;
    std::cin >> n;

    std::vector<long long> nums(n);

    for(auto &x : nums){
        std::cin >> x;
    }

    long long count = 0;

    for(long long i = 0; i < n; i++){
        if(i + 1 >= n) break;
        if(nums[i] > nums[i + 1]){
            count += nums[i] - nums[i + 1];
            nums[i + 1] += (nums[i] - nums[i + 1]);
        }
    }

    std::cout << count;

    return 0;
}