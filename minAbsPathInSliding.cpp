#include <iostream>
#include <vector>
#include <set>

using namespace std;



    vector<vector<int>> minAbsDiff(vector<vector<int>> & grid,int k){
    int m = grid.size();
    int n = grid[0].size();

    vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1, 0));

    for (int i = 0; i <= m - k; i++) {
        for (int j = 0; j <= n - k; j++) {

            // Step 1: store only DISTINCT values
            set<int> st;

            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    st.insert(grid[x][y]);
                }
            }

            // Step 2: convert to sorted vector
            vector<int> temp(st.begin(), st.end());

            // Step 3: if only one unique value
            if (temp.size() <= 1) {
                ans[i][j] = 0;
                continue;
            }

            // Step 4: find minimum difference between adjacent elements
            int minDiff = INT_MAX;
            for (int t = 1; t < temp.size(); t++) {
                minDiff = min(minDiff, temp[t] - temp[t - 1]);
            }

            ans[i][j] = minDiff;
        }
    }

    return ans;
    }
    



int main(){
    vector<vector<int>> grid={
        {8,12},
        {442,15}
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