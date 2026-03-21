#include <iostream>
#include <vector>

using namespace std;

class solution{
public:
       vector<vector<int>> flip_suare_matrix(vector<vector<int>> & grid,int x,int y, int k){

        for(int i=0;i<k/2;i++){
            for(int j=0;j<k;j++){
                swap(grid[x+i][y+j],grid[x+k-1-i][y+j]);
            }
        }
        return grid;
       }



};
int main(){
    vector<vector<int>> grid={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int k=3;
    int x=1;int y=0;

    solution S;

    vector<vector<int>>ans= S.flip_suare_matrix(grid,x,y,k);

    for(auto row: ans){
        for(auto ele : row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}