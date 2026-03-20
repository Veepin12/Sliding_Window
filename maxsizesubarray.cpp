#include <iostream>
using namespace std;

int maxsum(vector<int> & nums,int k){
    int n=nums.size();
    int window_sum=0;

    for(int i=0;i<k;i++){
        window_sum+=nums[i];
    }
    int max_sum=window_sum;

    for(int i=k;i<n;i++){
        window_sum += nums[i];
        window_sum -=nums[i-k];

        max_sum = max(max_sum,window_sum);

    }
    return max_sum;
}
int main(){
    vector<int> nums={2,1,5,1,3,2};
    int k=3;
    cout<<maxsum(nums,k);
    return 0;
}