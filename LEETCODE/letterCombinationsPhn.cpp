/*
letter combinations of phone no - using backtracking
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void backtrack(unordered_map<char, string>& map, string& digits, vector<string>& combinations, int index, string& currentStr)
{
    if(index == digits.size())
    {
        combinations.push_back(currentStr);
        return;
    }
    char digit = digits[index];
    string& letters = map[digit];

    for(const char& letter: letters)
    {
        currentStr.push_back(letter);
        backtrack(map, digits, combinations, index+1, currentStr);
        currentStr.pop_back();
    }
    
}
vector<string> letterCombinations(string& digits)
{
    vector<string> combinations;

    if(digits.empty()) { return {}; }

    unordered_map<char, string> digitToLetterMap = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}

    };
     // Check for invalid characters
    for (char digit : digits) {
        if (digitToLetterMap.find(digit) == digitToLetterMap.end()) {
            cout << "Invalid digit found: " << digit << endl;
            return {};
        }
    }
    string currentStr;
    backtrack(digitToLetterMap, digits, combinations, 0, currentStr);

    return combinations;
}

int main()
{
    string digits = "23";
    vector<string> combinations = letterCombinations(digits);

    for(const string& str: combinations)
    {
        cout<<str<<" ";
    }
    // ["ad", "ae", "af", ....]

}