#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;
bool containsDuplicates(vector<int>& nums)
{
    unordered_set<int> set;

        for(const int& num:nums)
        {
            if(set.find(num) != set.end())
            {
                return true;
            }
            set.insert(num);
        }
        return false;
        
}

int main()
{
    vector<int> nums = {1,2,3,1};
    bool flag = containsDuplicates(nums);
    
    return 0;

}