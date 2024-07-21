#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
#include <algorithm>

using namespace std;


vector<vector<int>> threeSum(vector<int>& nums)
{
    // vector<vector<int>> res;
    unordered_map<int, int> mp;
    // unordered_set<vector<int>> set1;
    unordered_set<vector<int>> s;

    for(int i=0; i<nums.size()-1;i++)
    {
        for(int j=i+1; j<nums.size();j++)
        {
            int diff = -(nums[i]+nums[j]);
            if(mp.find(diff) != mp.end())
            {
                vector<int> triplet = {nums[i], nums[j], diff};
                // sort(begin(triplet), end(triplet));
                sort(begin(triplet), end(triplet));
                s.insert(triplet);
            }
        }
        mp[nums[i]] = i;

    }
    return vector<vector<int>>(s);
}
int main()
{

    return 0;
}