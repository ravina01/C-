#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    // vector<int> res;

    unordered_map<int, int> mp;

    // for(int i=0; i<nums.size();i++)
    // {
    //     mp[nums[i]] = i;

    // }

    // for(int i=0; i<nums.size();i++)
    // {
    //     int complement = target - nums[i];
    //     if(mp.find(complement) != mp.end() && mp[complement] != i)
    //         return {i, mp[complement]};
    // }

    for(int i=0; i<nums.size();i++)
    {
        int complement = target - nums[i];
        if(mp.find(complement) != mp.end() )
            return {i, mp[complement]};
        mp[nums[i]] = i;

    }
    return {};
}

int main()
{

    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = twoSum(nums, 9);
    for(auto& r :res)
    {
        cout<<r<<" ";
    }

    return 0;
}