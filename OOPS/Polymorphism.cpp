/*
Third Pilar of OOPS - Polymorphism - many forms
- its ability of objects to take on different forms / behave in different ways depending upon the context in which they are used
- intersting concepts
- its constrctor overloading
- depending on the context our constructor decides which constructor is getting called and it takes that form

Types -
1. Compile Time Polymorhism aka static polymorphism - it tell what will be the output at Compiletime itself
- 1. its example of constructor overloading - same name - different parameters - different contexts
- 2. there's also function overlaoding - within same class, same method names but different parameters - different no of paras or types of para
- 3. Operator Overloading - defining custom behavior for operators (such as +, -, *) when they are applied to user-defined types (like classes).

Key points 
- early binding , because the function call is resolved during compilation.
- No Runtime Overhead
- Type Safety: Compile-Time Type Checking - Errors in func calls, type mismatches are caught at compile time, 
reducing the likelihood of runtime errors

Performance - 
bcoz the function to call is determined at compile time, 
it can lead to more optimized and faster code compared to runtime polymorphism (dynamic polymorphism), which involves late binding.
------------------

2. Run time Polymorphism - aka Dynamic Poly-  it tell what will be the output at Run itself - late binding
- 1. example - function overriding - it comes with inheritance. 
- parent and child both conatain the same function(same paras) with different implementation
- the parent class function is said to be overridden
- depends on which object is called parent / child, taht function is called,  which gets decided at the runtime

- 2. Virtual Functions 
- its a member function that you expect to be redefined in derived classes
- after inheritance, you expect the derived class to redefine the member function again.
- its almost like overriding
Properties - 
1. are dynamic in nature
2. defined by virtual keyword in parent, always declared in base class and overridden in child class
3. its called during runtime
Purpose - Enables dynamic method binding, allowing the program to call the overridden method in the derived class, 

NoTe: 

which contrctor gets called when an object is created.
1. non - parameterized one is called
- you have explicitly call parameterized constructor
*/
#include<iostream>
using namespace std;

class Student
{
    //Constructor Overloading - compile time poly
    public:
    string name;
        Student()
        {
            cout<<"Non-parameterzied constructor"<<endl;
        }
        Student(string name)
        {   
            this->name = name;
            cout<<"parameterzied constructor"<<endl;
        }
};

class Print
{
    // function/ method overloading - compiletime poly
    public:
        void show(int x)
        {
            cout<<"INT = "<<x<<endl;
        }
        void show(char ch)
        {
            cout<<"Char = "<<ch<<endl;
        }

};

class Parent
{
    // Run time poly - Function overriding
    public:
    void show()
    {
        cout<< "Parent class"<<endl;
    }

    //virtual function  - we expect child class to reimplement this method
    virtual void hello()
    {
        cout<<"Hello from Parent Virtual\n";
    }
};

class Child: public Parent
{
    public:
    void show()
    {
        cout<< "Child class"<<endl;
    }

    // no need to write virtual here
    void hello()
    {
        cout<<"hello from child "<<endl;
    }
};

int main()

{
    //Constructor Overloading - Compile Time
    Student s1;
    Student s2("Ravina");

    //Fucntion Overloading - Compile Time
    Print p1;
    p1.show(0);
    p1.show('&');

    //Function Overridng - RunTime
    Child c1;
    c1.show(); // here show is private by default hecnce , no access ouside the class

    Parent pr1;
    pr1.show(); // here show is private by default hecnce , no access ouside the class

    c1.hello();

    return 0;
}