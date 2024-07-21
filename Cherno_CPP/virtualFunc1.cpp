#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base class show function called" << std::endl;
    }

    void display() {
        std::cout << "Base class display function called" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function called" << std::endl;
    }

    void display() {
        std::cout << "Derived class display function called" << std::endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    // Virtual function, binded at runtime
    basePtr->show();

    // Non-virtual function, binded at compile time
    basePtr->display();

    return 0;
}
