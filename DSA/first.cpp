/*
how data is stored and how it works - in bytes,
int 4 bytes - 32 bits hence max valiue 2^32 - 1
char 1 byte - 8 bits - 2^8 - 1 = 0-255

how -ve no are stored?
first bit if no is +ve its 0 otherwise its 1
-5 - convert to binary - take 2's compliment and store - 2's complement = 1's compliment + 1
store -ve no in 2's complimenta nd also print in 2's compliment
- 2's compliment stores the value .

if you have all +ve no will use unsigned int

*/
#include <iostream>

using namespace std;

int main()
{
    // type casting
    int a = 'a';
    cout<< a<<endl; //97

    char ch = 98;
    cout<<ch<<endl;//b

    // we know char is 1 byte what if we add a value greater than 255 bits // overflow
    // char ch1 = 644;
    // cout<<ch1<<endl;


    int b = -5;
    cout<< b << endl;

    unsigned int x = 8;
    cout<<x<<endl;

    float c = 2.0/5;
    cout<<c<<endl;
    return 0;
}