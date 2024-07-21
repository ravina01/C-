/*
Deque
*/

#include<iostream>
#include<deque>


using namespace std;
int main()
{
    deque<int> qu = {9,9,9};

    cout<<qu[6]<<endl;
    cout<<qu.front()<<endl;

    for(auto it= qu.begin(); it!=qu.end(); it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}