#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;

bool isValidParentheses(string& s)
{
    unordered_map<char, char> mp;
        stack<char> stk;
        if(s.length() == 1) { return false;}

        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for(char& ch:s)
        {
            if(mp.find(ch) != mp.end())
            {
                if(!stk.empty() && stk.top() == mp[ch])
                    stk.pop();
                else
                {
                    return false;
                }
            }
            else
            {
                stk.push(ch);
            }

        }

        return stk.empty();
}

int main()
{
    std::string s = "{[()]}";
    bool flag = isValidParentheses(s);
    return 0;
}