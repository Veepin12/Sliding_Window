#include <iostream>
#include <vector>
#include <set>

using namespace std;
vector<vector<int>> minAbsDiff(vector<vector<int>> & grid,int x,int y,int k){
    int m = grid.size();
    int n = grid[0].size();

    

    for (int i = 0; i <k/2; i++) {
        for (int j = 0; j <k; j++) {
            swap(grid[x+i][y+j],grid[x-k-1-i][y-k-1-j]);
            

        }
    }


    return grid;
}
    



int main(){
    vector<vector<int>> grid={
      {3,4,5,6},{2,3,4,5},{8,7,9,5}
     };
    int k=2;
    vector<vector<int>> answer=minAbsDiff(grid,k);
    for(auto &ele: answer){
        for(auto & val: ele){
        cout<<val<<" ";
        }
    cout<<endl;
    }
    return 0;
}