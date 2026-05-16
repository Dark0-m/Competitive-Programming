#include <bits/stdc++.h>

struct bucket{
    int capicity;
    int milk_left;
};

void transfer_milk(bucket& b1, bucket& b2){
    int total = b1.milk_left + b2.milk_left;

    if(total > b2.capicity){
        b1.milk_left = total - b2.capicity;
        b2.milk_left = b2.capicity;
    }
    else{
        b2.milk_left = total;
        b1.milk_left = 0;
    }
}

int main(){

    std::vector<bucket> buckets(3);

    for(auto &bucket : buckets){
        std::cin >> bucket.capicity >> bucket.milk_left;
    }

    int current_bucket = 0;

    for(int i = 0; i < 100; i++){
        if(current_bucket >= 2){
            transfer_milk(buckets[2], buckets[0]);
            current_bucket = 0;
            continue;
        }

        transfer_milk(buckets[current_bucket], buckets[current_bucket + 1]);
        current_bucket++;
    }

    for(auto &bucket : buckets){
        std::cout << bucket.milk_left << '\n';
    }

    return 0;
}