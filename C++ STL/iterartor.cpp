#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4 ,5, 7};

    auto it = v.begin();

    cout<<*it<<endl;
    it = v.insert(it, 100);
    cout<<*it<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    v.push_back(10);
    v.pop_back();

    return 0;
}