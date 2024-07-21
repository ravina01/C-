/*
Headers cpp
*/

#include<iostream>
using namespace std;

void LOG(const char* message)
{
    std::cout<<sizeof(message)<<std::endl;
    std::cout<<message<<std::endl;
}

void IncrementbyRef(int& value)
{
    value++;
}

void IncrementbyPtr(int* value)
{
    (*value)++;// first derefrnce and then increase its value
}
int main()
{
    LOG("Ravina sup?");
    int a = 9;
    void* ptr= &a;  
    // void can hold addrs of any data type but cant derefence it
    // cout<<*ptr<<endl; - error cant dereference 

    // heap memo allocation of pttrs

    char* buffer = new char[8];

    for (int i = 0; i < 8; ++i) {
        buffer[i] = 'a' + i; // Assign characters 'a' to 'h'
    }

    // Print the contents of the allocated memory
    for (int i = 0; i < 8; ++i) {
        std::cout << buffer[i] << " ";
    }
    cout<<endl;
    cout<<char('a'+1)<<endl;

    char** bptr = &buffer;


    delete[] buffer;// manual delete



    // References 

    // x and ref can be used to access same memo location
    int x = 10;
    int* b = &a; // this is diff - its ptr
    int& ref = x; // ref is a reference to x
    ref = 3;
    std::cout << "x: " << x << std::endl;
    std::cout << "ref: " << ref << std::endl;


    int y = 10;
    
    IncrementbyRef(y);// nicer and easier way
    cout<<y<<endl;
    IncrementbyPtr(&y);// we have to derefnce and then increase the value


    cout<<y<<endl;

    std::cin.get(); // Pausing the Program:waits for the user to press Enter, effectively pausing the program until input is received.

}