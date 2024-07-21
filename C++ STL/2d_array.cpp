#include<iostream>

using namespace std;

void printArr(int (&arr)[3][3], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    const int rows = 3;
    const int cols =3;

    int arr[rows][cols] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printArr(arr, rows, cols);

    //transpose - only swap upper triangle mat
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
            swap(arr[i][j], arr[j][i]);
        }
        cout<<endl;
    }
    printArr(arr, rows, cols);
    return 0;
}