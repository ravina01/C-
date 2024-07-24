#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& stringvec)
{
    vector<vector<string>> group;
    unordered_map<string, vector<string>> myMap;
    // key - sorted string as key, 

    for(string& element: stringvec)
    {
        string key = element;
        sort(key.begin(), key.end());
        myMap[key].push_back(element);
    }

    for(const auto& element: myMap)
    {
        group.push_back(element.second);
    }

    return group;
}

int main()
{
    vector<string> stringvec = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(stringvec);

    for(const auto& val:result)
    {
        for(const auto& word:val)
        {
            cout<<word<<" ";
        }
        cout<<endl;
    }

    return 0;
}