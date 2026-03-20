#include <iostream>
#include <vector>

using namespace std;


int max_Sub_Matrix(vector<vector<int>> & nums,int k){
    int n=nums.size();
    int m=nums[0].size();

    int maxsum=INT_MIN;

    for(int i=0;i<=n-k;i++){
        for(int j=0;j<=m-k;j++){
            int sum = 0;

            for(int x=i;x<i+k;x++){
                for(int y=j;y<j+k;y++){
                    sum+=nums[x][y];

                }
            }
           maxsum=max(maxsum,sum);


        }
         
    }
    return maxsum;

}

int main(){
    vector<vector<int>> nums={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int k=3;
    cout<<max_Sub_Matrix(nums,k);
    return 0;
}