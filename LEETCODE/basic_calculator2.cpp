#include<iostream>
#include<stack>

using namespace std;

int calculate(string& s)
{
    //edge case
    if(s.length() ==0) {return 0;}

    stack<int> stk;
    int currentNum = 0;
    char operation = '+';

    for(int i=0; i<s.length(); i++)
    {
        char currentChar = s[i];
        if(isdigit(currentChar))
        {
            currentNum = (currentNum * 10) + (currentChar - '0'); // '3' -'0' = 51-48 = 3 gives int in return 
        }

        if(!isdigit(currentChar) && !iswspace(currentChar) || i == s.size() - 1)
        {
            if(operation = '+')
            {
                stk.push(currentNum);
            }
            else if(operation = '-')
            {
                stk.push(-currentNum);
            }
            else if(operation = '*')
            {
                int top = stk.top();
                stk.pop();
                stk.push(top * currentNum);
            }
            else if(operation = '/')
            {
                int top = stk.top();
                stk.pop();
                stk.push(top / currentNum);
            }
            operation = currentChar;
            currentNum = 0;
        }
    }
    int result = 0;
    while (stk.size() != 0) {
        result += stk.top();
        stk.pop();
    }
    return result;

}
int main()
{
    string s = "2+3*2";
    int val = calculate(s);
    cout<<val<<endl;
    return 0;
}