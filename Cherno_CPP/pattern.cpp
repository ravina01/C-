/*
pattern - while looping understanding
*/

#include<iostream>

using namespace std;

void pattern_square(int num)
{
    int i = 1;
    while(i <num+1)
    {
        int j = 1;
        while(j < num+1)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}
void pattern_triangle(int num)
{
    int i = 1;
    while(i <num+1)
    {
        int j = 1;
        while(j < i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    int n = 3;
    // pattern_square(n);
    pattern_triangle(n);
    return 0;

}