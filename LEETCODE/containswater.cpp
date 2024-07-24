#include<iostream>
#include<vector>

using namespace std;

int maxArea(vector<int>& nums)
{
    int area=0;

    int left = 0;
    int right = nums.size()-1;

    while(left<right)
    {
        int minVal = min(nums[left], nums[right]);
        area = max(area, (minVal * (right-left)) );
        if(nums[left] < nums[right])
            left++;
        else if (nums[left] > nums[right])
            right--;

        else
        {
            left++;
            right--;
        }
    }
    return area;
}

int main()
{
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    int area = maxArea(nums);

    cout<<area<<endl;

    return 0;

}