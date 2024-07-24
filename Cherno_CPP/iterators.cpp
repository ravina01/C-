#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{

    vector<int> vec={1,2,3,4,5,6};


    for(int& v:vec)
    {
        cout<<v<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator it = vec.begin(); it!= vec.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // map

    std::unordered_map<string, int> map;
    map["ravina"] = 9;
    map["Radha"] = 10;

    using iterMap = unordered_map<string, int>::iterator;

    for(iterMap  it= map.begin(); it!= map.end(); it++)
    {
        cout<<it->first<<" ";
    }
    cout<<endl;
    for(auto& [key,val]: map)
    {
        cout<<key<<" ";
    }
    return 0;
}