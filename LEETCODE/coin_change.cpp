#include<iostream>
#include<vector>

using namespace std;

int coinChange(vector<int>& coins, int& amount)
{
    cout<<amount+1<<endl;
    vector<int> dp(amount+1, amount+1);
    for(const auto& i:dp)
    {
        cout<<i<<" ";
    }
    
    dp[0] = 0;

    for(int i = 1; i<dp.size(); i++)
    {
        for(const int& coin: coins)
        {
            if(i-coin >= 0)
            {
                dp[i] = min(dp[i], dp[i-coin]+1); // (6, 1) = 1 //(6, 2) // (6, 1)
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main()
{
    vector<int> coins = {1,2,5}; // 6, 6,6,6,6,6 // 0, 6,6,6,6,6 //0, 1, 1, 2, ,2 , 1 - coin >=0 - min(dp[i-1]+1, dp[i-coin])
    int target = 5;

    int minCount = coinChange(coins, target);
    cout<<endl;
    cout<<"minCount = "<<minCount<<endl;

    return 0;

}