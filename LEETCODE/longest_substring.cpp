#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int longestSubstring(const string& s)
{   
    int maxLength = 0;
    int start =0;

    unordered_map<char, int> mapIndex;

    for(int i=0; i<s.length(); i++)
    {
        if(mapIndex.find(s[i]) != mapIndex.end())
        {
            start = max(start, mapIndex[s[i]]+1);
        }
        mapIndex[s[i]] = i;
        maxLength = max(maxLength, i-start+1);
        auto it = mapIndex.find(s[i]);
        // cout<<mapIndex.find(s[i])<<endl;

    }

    return maxLength;
}

int main()
{
    string s1 = "abcabcabc";
    int longest_length = longestSubstring(s1);
    cout<<"longest_length = "<<longest_length<<endl;

    return 0;
}