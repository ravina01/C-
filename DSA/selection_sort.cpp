/*
selection sort - find the min element in unsorted array and swap it with element at beginning

*/

#include<iostream>
using namespace std;

void selection_sort(int arr[], int size)
{

    for(int i =0;i<size-1;i++)
    {
        for(int j =i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{

    int arr[] = {9,6,7,8,4,3};
    int size = sizeof(arr)/sizeof(int);
    selection_sort(arr, size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}