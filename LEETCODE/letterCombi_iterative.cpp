/*
Letter combinations of phone no using - Iterative approach.
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>

using namespace std; 

vector<string> combine(vector<string>& s1, vector<string>& s2)
{
    vector<string> res;

    for(string a:s1)
        for(string b:s2)
        {
            res.push_back(a+b);
        }

    return res;
}
vector<string> combinations(string& digit)
{   
    //edge case -
    if(digit.empty()) {return {}; }


    unordered_map<char, vector<string>> letters = {
            {'2', {"a", "b", "c"}},
            {'3', {"d", "e", "f"}},
            {'4', {"g", "h", "i"}},
            {'5', {"j", "k", "l"}},
            {'6', {"m", "n", "o"}},
            {'7', {"p", "q", "r", "s"}},
            {'8', {"t", "u", "v"}},
            {'9', {"w", "x", "y", "z"}}
        };

    if(digit.length() == 1)
    {
        return letters[digit[0]];
    }
    vector<string> s1 = letters[digit[0]];
    vector<string> s2 = letters[digit[1]];

    vector<string> res = combine(s1, s2);
    return res;
}

int main()
{
    string digit = "23";
    vector<string> res = combinations(digit);
    for(const auto& r : res)
    {
        cout<<r<<" "<<endl;
    }
    return 0;
}