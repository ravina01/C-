/*
Binary search - O(longn)
This code performs a binary search on a sorted array with a time complexity of O(log n).
best case TC = o(1)
*/

#include<iostream>

using namespace std;

int binarySearch(int arr[], int target, int size)
{
    int left = 0;
    int right = size-1;
    int mid=0;
    while(left<=right)
    {
        mid = (left+right)/2;

        if(target>arr[mid])
        {
            left = mid+1;
        }
        else if (target<arr[mid])
        {
            right = mid-1;
        }
        else
        {
            return mid;
        }   
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5,6 ,7,9, 10, 11};
    int size = sizeof(arr)/sizeof(int);
    int index = binarySearch(arr, 10, size);
    cout<<index<<endl;
    return 0;
}