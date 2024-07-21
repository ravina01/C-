#include<iostream>
#include<array>

using namespace std;

int main()
{

    int example[6]={1,3, 6};
    int* ptr = example;

    *(ptr+2) = 1000;
    for(int i=0; i<6;i++)
    {
        cout<<example[i]<<" ";
    }

    //arrays on heap
    std::cout<<endl;

    int* arr = new int[10];

    for(int i=0; i<10;i++)
    {
        arr[i] = 9;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // arr[9] = 10;
    cout<<arr[-1]<<endl; // cant do like python

    std::array<int,5> another;

    cout<<another.size()<<endl;
    delete[] arr;

}