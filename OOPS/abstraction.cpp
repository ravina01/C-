/*
Abstraction - Forth Pilar of OOPs
1. - hiding all unnecessary details and showing only the important parts
- with the help of access modifiers we use abstraction
- sensitive details - we use private to hide
- if we want to keep things private yet inherit them we can use -> protected in that case.
- its not just data hiding, but abstraction also show important data.
- access modifiers are a way of implementing abstraction

2. - another way is using abstract class 
- main work of class is to create objects but, 
- it never creates objects but helps others to create objects.
- the only purpose is for inheritance, it only talks about how derived classes should be.
- abstract class is more like Blueprint for all derived classes
- they cannot be instantiated that no objects can be made. only meant to be inherited.
- only has method definations in parent - no implementation, implementation will be found in derived classes
- they are used to define interface for derived class, more like layout
- any parent class which has pure virtual function it automatically becomes abstract class.

*/

#include<iostream>

using namespace std;

//abstract class
class Shape
{
    virtual void draw() = 0; // pure virtual fucntion as the value is 0
    /// this makes the class abstract class and you can make its obj, you wil get an error.
};

class Circle: public Shape
{
    public: 
    void draw()
    {
        cout<<"Circle drawing is here"<<endl;
    }
};
int main()
{
    // Shape s1; // cant be done as it is abstract class

    Circle c1;
    c1.draw();

    return 0;
}