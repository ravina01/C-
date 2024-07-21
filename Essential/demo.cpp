#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    // msg.
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << "sup ? Revu"<<endl;

    int a = 'a';
    cout<< a<<endl;

    char ch = 98;
    cout<<ch<<endl;

    return 0;
}