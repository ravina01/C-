/*
This covers c++ 14 new features -

1. digit seperator

2. Binary Literals - you can combine this with digit seperators

3. Deprecated Attributes/ functions in C++ - use of the name or entity declared with this attribute is allowed, but discouraged for some reason.
usually comes with warnings

4. Varibale Template in c++ - before c++14 we had function and class template, now we have variable template. 
--
type specific consts - allow defining const that varu based on the type - maths const
simpleification + readability - no need for structs / class to hold const
Variable templates can be used in conjunction with constexpr to perform compile-time computations

5. Generic Lambda Expressions
6. Return type deduction 

*/

#include<iostream>
using namespace std;

//Deprecated 
[[deprecated("No longer in use, we updated the function")]]
int add(int a, int b) {return a+b;}


template <typename T>
constexpr T pi = T(3.14159256778918491849089048390849038L); // define expressions that can be evaluated at compile time. 
int main()
{
    // Digit Seperator
    long largeNum = 1'000'765L;

    std::cout << largeNum << std::endl;

    // Binary Literals
    int b1 = 0xFF;
    int b2 = 0b1111110;

    std::cout<< b1 << std::endl;
    std::cout<< b2 << std::endl;

    
    std::cout<<add(3,4)<< std::endl;


    // Variable Template in C++
    std::cout.precision(10);
    std::cout << "pi<int>: " << pi<int> << std::endl;
    std::cout << "pi<float>: " << pi<float> << std::endl;
    std::cout << "pi<double>: " << pi<double> << std::endl;
    std::cout << "pi<long double>: " << pi<long double> << std::endl;


    // Generic Lambda 
    auto add = [](auto x, auto y) {return x+y;}; 
    // square brackets can be used to capture variables from the surrounding scope, but in this case, they are empty, indicating no capture.

    std::cout<<add(4, 5)<< std::endl;

    std::string s1= "hello", s2="Ravina";
    std::cout<<add(s1, s2);

    return 0;
}

