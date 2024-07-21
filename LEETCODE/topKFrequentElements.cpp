#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>

using namespace std;

vector<int> topKFreqElements(vector<int>& nums, int k)
{
    vector<int> result;
    unordered_map<int, int> freqMap;

    for(const auto& element: nums)
    {
        freqMap[element]++;
    }

    priority_queue<std::pair<int,int>> q; // max heap
    for(const auto& iter:freqMap)
    {
        q.push(make_pair(iter.second, iter.first));
        
    }
    for(int i=0;i<k;i++)
    {
        result.push_back(q.top().second);
        q.pop();
    }

    return result;
}
int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};// 1: 3, 2: 2, 3: 1
    int k = 2;
    vector<int> res = topKFreqElements(nums,k);
    for(const int& i : res)
    {
        cout<<i<<" ";
    }

    return 0;
}

