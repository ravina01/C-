#include<iostream>
#include<vector>

using namespace std;

int subarraySum(vector<int>& nums, int k)
{
    int left = 0;
    int sumCount = 0;
    for(int right = 0; right< nums.size(); right++)
    {
        if(nums[right] == k)
            sumCount++;
        else if(left != right && nums[left] + nums[right] == k)
        {
            sumCount++;
            left++;
        }

    }
    return sumCount;
}
int main()
{
    return 0;
}
