#include <iostream>
#include <vector>

using namespace std;


int max_Sub_Matrix(vector<vector<int>> & nums,int k){
    int n=nums.size();
    int m=nums[0].size();

    int maxsum=INT_MAX;

    for(int i=0;i<=n-k;i++){
        for(int j=0;j<=m-k;j++){
            int sum = 0;

            for(int x=i;x<i+k;x++){
                for(int y=j;y<j+k;y++){
                    sum+=nums[x][y];

                }
            }
           maxsum=min(maxsum,sum);


        }
         
    }
    
    return maxsum;

}

int main(){
    vector<vector<int>> nums={
        {1,-2},
        {2,3}
    };
    int k=2;
    cout<<max_Sub_Matrix(nums,k);
    return 0;
}