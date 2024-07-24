#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool isAnagram(string& s, string& t) {
        
        int lenS = s.length();
        int lenT = t.length();

        if(lenS != lenT) { return false; }

        unordered_map<char, int> myMap;
        for(char& ch:s)
        {
            myMap[ch]++;
        }

        for(char& ch:t)
        {
            myMap[ch]--;
        }
        for(const auto[key,val]: myMap)
        {
            if(val != 0)
            {
                return false;
            }
        }
        return true;
    }

int main()
{
    string s = "rat";
    string t = "car";
    bool flag = isAnagram(s, t);
    cout<<flag<<endl;
    return 0;
}