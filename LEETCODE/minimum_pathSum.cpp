#include<iostream>
#include<vector>

using namespace std;
int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> dp (rows, vector<int>(cols, 0));

        for(int i=rows-1; i>=0; i--)
            for(int j=cols-1; j>=0;  j--)
            {
                if(i == rows-1 && j!= cols-1)
                    dp[i][j]= grid[i][j] + dp[i][j+1];
                else if(j ==cols-1 && i!=rows-1)
                    dp[i][j]= grid[i][j] + dp[i+1][j];
                else if(i!=rows-1 && j!=cols-1)
                    dp[i][j]= grid[i][j] + min(dp[i][j+1], dp[i+1][j]);
                else
                    dp[i][j]= grid[i][j];
            }
        return dp[0][0];
    }
    
int main()
{

}