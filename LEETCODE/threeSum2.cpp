#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) 
{
    //sort the nums and then access one elemnet and apply 2 pointers on next element till the end of an array

    sort(nums.begin(), nums.end());//nlogn 
    vector<vector<int>> res;
    for(int i=0;i<nums.size();i++)
    {
        int left = i+1;
        int right = nums.size()-1;
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        while(left<right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum == 0)
            {
                vector<int> triplet = {nums[i] , nums[left] , nums[right]};
                res.push_back(triplet);
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

            }
            else if(sum<0)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

    }
    return res;
    
}