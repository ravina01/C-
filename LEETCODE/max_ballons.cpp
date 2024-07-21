#include<iostream>
#include<string>
#include<unordered_map>
#include <algorithm>

using namespace std;

int maxNumberOfBalloons(const string& text) 
{
        

        unordered_map<char, int> freqMap;

        for(auto element: text)
        {
            freqMap[element]++;
        }

        int occuranceB = freqMap['b'];
        int occuranceA = freqMap['a'];
        int occuranceL = freqMap['l']/2;
        int occuranceO = freqMap['o']/2;
        int occuranceN = freqMap['n'];

        return min({occuranceB, occuranceA, occuranceL, occuranceO, occuranceN});
}

int main()
{

    return 0;
}