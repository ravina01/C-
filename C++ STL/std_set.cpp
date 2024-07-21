#include<iostream>
#include<set>

using namespace std;
int main()
{   
    set<int> s = {1,6,3,4,5,2,7};

    cout<<s.size()<<endl;
    s.insert(10);
    s.insert(20);

    for(auto& x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    // auto it = s.begin();
    auto it = s.find(5);
    cout<<*(it)<<endl;

    auto ub = s.upper_bound(6);
    cout<<*ub<<endl;
    return 0;
}