#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m = {{10, "ravina"}, {20,"adi"}};
    cout<<m.size()<<endl;

    for(auto& p:m)
    {
        cout<<p.first<<endl;
        cout<<p.second<<endl;
    }

    auto it = m.find(20);

    cout<<it->first<<endl;
    return 0;
}