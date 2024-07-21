/*
Desctructor(deallocates memory) - Opposite of constructor(allocates memo)
- no overloading
- no return type
- only deallocates statically memo not dynamic
- if you have created dynamic memo within object/class - then you have to explicitly deallocate
- if dynamically alloctaed using new keyword then use delete to deallocate
- if we delete the pointer then it deletes the memory assosiated with the pointer not the pointer
- if dynamic memo is not released then we might face memo leak issue
*/
#include<iostream>
using namespace std;

class Student
{

    public:
        ~Student()
        {
            std::cout<< "Hi this is desctuctor\n";
        }

};

int main()
{
    Student s1;
    return 0;
}
// doesnt not delete dynamically assigned memo
// use delete to delete dynamically asssigned memo