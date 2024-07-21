#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{

    int arr[]={4,6,8,3,9,0};
    int size = sizeof(arr)/sizeof(int);
    vector<pair<int,int>> v;

    for(int i=0;i<size;i++)
    {
        v.push_back(std::make_pair(arr[i], i));
    }

    sort(v.begin(), v.end());

    for(const auto& element: v)
    {
        cout<<element.first<<" "<<element.second<<endl;
    }

    
}