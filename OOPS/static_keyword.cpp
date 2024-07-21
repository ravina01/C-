/*
Lets talk about static keyword
1. static variable -
In Function - variables declared as static in a function, are created and initialised once for the lifetime of the program.

2. static objects - 
In Class - static variables in a class are created and initialised once. they are shared by all the objects of the class.
*/

#include<iostream>
using namespace std;

class ABC
{
    public:
        ABC()
        {
            cout<<"Constructor call"<< endl;
        }

        ~ABC()
        {
            cout<<"Destructor call"<< endl;
        }
};

void fun()
{
    int x = 0; // init gets executed everytime
    static int x1=0; // init statement gets executed just once 
    cout<<"normal x = "<<x<<endl;
    cout<<"static x  = "<<x1<<endl;
    x++;
    x1++;
}

int main()
{
    fun();//0
    fun();//0
    fun();//0 
// inside the call stack, every time its called its getting alloacted on stack memo and automattically get deleted once it comes outta the scope.
// after static even if the fun function call gets over, the x remains in the memory and can be used again with updated value

    if(1)
    {
        ABC a1;
    }
    /*
    normal object creation -
    Constructor call
    Destructor call
    End of the program
    */

    if(1)
    {
        static ABC a2;
    }
    /*
    static object creation -
    Constructor call
    End of the program
    Destructor call
    
    */
    cout<<"End of the program\n";
    return 0;
}