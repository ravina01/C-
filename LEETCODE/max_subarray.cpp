#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums) 
{
    int n = nums.size();
    int currentNum = nums[0];
    int maxSum = nums[0];

    for(int i=1; i<n; i++)
    {
        currentNum = max(nums[i] + currentNum, nums[i]);
        maxSum = max(maxSum, currentNum);
    }

    return maxSum;
}

int main()

{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};// -2, 1, 
    int sum = maxSubArray(nums);

    cout<<sum<<endl;

    return 0;
}

