/*
Templates
*/
#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a+b;
}
int main()
{
    // cout<<add('c'+'d')<<endl;
    int x = add(0,9);
    float y = add(0.9,9.9);
    std::cout<<x<<endl;

    return 0;

}