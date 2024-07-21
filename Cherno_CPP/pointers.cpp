/*

Lets learn about Pointers
pointers stores the address of other var, address will be in hexadecimal compact format

'&'             -  this will return an address of any variable or things.
    '*'             -  this will dereference an address
    'int *'         -  this will make a pointer variable
    'variable_name' -  this will return value of a 'variable_name' 
Extra:-
   swap(a,b) - Call by value
   swap(&a,&b) - Call by reference

   - we can use pointers to access the value and also modify the value
- arithmetic operations on pointer - if we do ++, int -> 4 bytes get added
- pointers and arrays - 
- double pointers - another pointer to point first pointer
- we can have triple pointers too

- passing pointers to a fucntion


*/

void swap(int* cptr, int* dptr)
{
    int temp = *cptr;
    *cptr = *dptr;
    *dptr = temp;
}
#include<iostream>

using namespace std;


int main()
{
    int a = 10;

    int* aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<*aptr<<endl;// derefrence
    aptr++;// 4 byttes get added
    cout<<aptr<<endl;
    cout<<*aptr<<endl;

    int arr[] = {10, 20, 30, 40};

    cout<<&arr[0]<<endl;
    int* arrptr = &arr[0]; // OR int* ptr = arr;
    arrptr++;
    cout<<arrptr<<endl;
    cout<<&arr[1]<<endl;

    cout<<"New array ----------------------\n";
    int arr1[] = {1, 2, 3};

    cout<<*arr1<<endl;//1

    int* ptr = arr1;// adress of first val
    cout<<ptr<<endl;

    // how to print the array using pointers

    for(int i = 0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;// 4 bytes added
    }

    for(int i = 0; i<3; i++)
    {
        cout<<*(arr1+i)<<endl;
        // arr++;// this is illegal
    }

    //Pointer to pointer - double pointers

    cout<<"Pointer to Pointer ------------\n";
    int x = 20;
    int* xptr = &x;

    int** xxptr = &xptr;

    cout<<*xptr<<endl; // val = 20
    cout<<*xxptr<<endl; // adress of xptr
    cout<<**xxptr<<endl; // value at xptr


    //Pass by pointers to functions

    int c = 20;
    int d = 60;

    int* cptr = &c;
    int* dptr = &d;

    swap(cptr,dptr); // swap(&c, &d) - but in function call the address will be accessed using int* cptr only
    cout<<"c= "<<c<<"d = "<<d<<endl;
    return 0;

}