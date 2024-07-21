/*
Array - 1D, 2D, Multi, pass by val and pass by ref
data type is the same

*/

#include<iostream>
using namespace std;
void update(int arr[], int sizeArr)
{
    for(int i = 0; i<sizeArr;i++)
    {
        arr[i]+1;
    }

}
void reverseArr(int arr[], int size)
{
    int left = 0;
    int right = size -1;

    while(left<right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    int arr[20] = {1,2 ,3 ,4,5,6,7};

    int sizeArr = sizeof(arr)/sizeof(int);

    cout<<sizeof(arr)<<endl;//80
    cout<<sizeof(int)<<endl;//4
    cout<<sizeArr<<endl;//20

    for(int i =0; i< sizeArr; i++)
    {
        cout<<arr[i]<<" ";
    }
    int a1[]={2};
    // cout<<sizeof(a1)<<endl;


    update(arr, sizeArr);// pass by ref we are sendin the arr which stores the adress of array

    for(int i = 0; i<sizeArr;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // all same values
    cout<<arr<<endl;
    cout<<&arr<<endl;
    int* arrptr = arr;
    cout<<arrptr<<endl;

    reverseArr(arr, sizeArr);
    for(int i = 0; i<sizeArr;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

