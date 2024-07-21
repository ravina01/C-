/*
Constructor - gets called automatically. - used for initialization
invoked automatically at the time of obj creation. 
same as class name
no return type
only called once, at obj creation.
memo allocation happens when constructor is called.

class doesnt take lot of memory space but the objects created from it does.
either program makes constructor/ it gets created by compiler
Constructor is always public not private, 

3 types of constructor -->
1. non - parameterized constructor
2. parameterized constructor = constructor overloading - its an example of polymorphism
3. Copy Constructor - special constructor used to copy properties of one obj into another.
- we can make our copy constructors also or its given by default
- it only makes shallow copy not deep, hence we chnage any attribute of second obj, the changes gets reflected in the first obj
- you will have to make deep copy

this is a special pointer in c++ that points to the current object.
this -> prop is same as *(this).prop - prop is property

shallow and Deep Copy -->
a shallow copy of an obj copies all of the member values from one obj to another
- both values point to same memory allocation

deep copy on the other hand, not only copies the member values but also makes copies of any dynamically allocated memo 
that the members point to - then we can modify the second obj value which is copied fromm first but it won't affect first obj data

whenever we have dynamically allocated memory we prefer deep copy
*/

#include<iostream>

using namespace std;

class Teacher
{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;

        Teacher() // non-parameterized constructor
        {
            std::cout<< "Hi I am Constructor of Teacher"<<std::endl;
            dept = "CS";
        }
        // here we have to give names other than the data members hence 
        // to avoid giving different names we can use this pointer and use all names as is

        /*
        Teacher(string n, string dep, string sub, double sal) // Parameterizeed constructor
        {
            name = n;
            subject = sub;
            salary = sal;
            dept = dep;
        }*/

        // here to avoid name clash and to show objects properties we can use this pointer - hence we added this->
        // this differentiate the obj's properties from method attributes if names are the same
        // this points to the memory which is pointing to the obj - it points calling obj

        Teacher(string name, string dept, string subject, double salary) // Parameterizeed constructor
        {
            this->name = name;
            this->subject = subject;
            this->salary = salary;
            this->dept = dept;
        }
        
        //Custom copy Constructor
        Teacher(Teacher &oroginalObject) //pass by ref - its not the copy of the original obj its the oriinal obj
        {
            std::cout<<"I am custom copy constructor";
            this->name = oroginalObject.name;
            this->subject = oroginalObject.subject;
            this->salary = oroginalObject.salary;
            this->dept = oroginalObject.dept;
        }
        void getInfo()
        {
        std::cout<<"name = "<<name<<std::endl;
        std::cout<<"subject = "<<subject<<std::endl;
        std::cout<<"dept = "<<dept<<std::endl;
        std::cout<<"salary = "<<salary<<std::endl;
        }
};
int main()
{
    Teacher t1("Ravina", "CS", "Maths", 26000); // calls constructor
    
    t1.getInfo();
    std::cout<<endl;
    //custom copy constructor
    Teacher t2(t1); // Copy constructor creates new obj with t2 and alloctaes memory to it
    t2.getInfo();
    return 0;
}