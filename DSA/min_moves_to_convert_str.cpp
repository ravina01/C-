#include<iostream>
#include<string>

using namespace std;

int minimumMoves(string s) {
    
    int n = s.length();
    int minCount = 0;
    char ch = 'X';
    std::size_t init = s.find(ch);

    for (int i = 0; i < n; ) {
            if (s[i] == 'X') {
                minCount++;
                i += 3; // Skip the next two characters because they will be flipped to 'O'
            } else {
                i++;
            }
        }

    return minCount;
}

int main()
{

    string str = "OXOX";
    int count = minimumMoves(str);
    cout<<count<<endl;
}