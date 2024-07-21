#include<iostream> //input op stream - its stl 
#include<cmath>
int main()
{
    // std::cout << "Hello starting c++ essential training!"<< std::endl; //statmenr terminates with ;

    int file_size=0;
    // double sales = 9.99;

    // std::cout << file_size;
    
    /*
    cout - char out
    cin - char in

    
    */

   // swap values of 2 var
   int a = 10;
   int b = 20;

   int c = 0;

   c = a;
   a = b;
   b = c;
   std::cout<< a << "\t swapped " << b << std::endl;

   

   // Constants

   const double pi = 3.14;
    // pi = 0; // cant assign var pi to something else.

    // snake case - naming convetions to name our variable. file_size
    // Pascal case - with caps on - FileSize
    // int file_size; // snake case
    int Filesize; //  pascal case

    int fileSize; // camel case

    int x = 10;
    int y = 3;
    float z = x % y;
    std::cout << z << std:: endl;

    // to get results in decimals we have to make x / y as double/ float

    // Increament operators as post / pre fix 

    int v = x++;
    int k = ++y;
    std:: cout << v << std:: endl; // 10

    std:: cout << x << std:: endl; // 11
    std:: cout << k << std:: endl; // 4
    std:: cout << y << std:: endl; // 4

    double Sales = 95000;
    std::cout<< " sale: $" << Sales << std::endl;

    const double stateTaxRate = 0.04;
    double stateTax = Sales * stateTaxRate;
    std::cout<< " stateTax: $" << stateTax << std::endl;


    double result_floor = floor(1.2345); // rounds down
    double result_ceil = ceil(2.7878); // rounds up

    std::cout<< result_floor << std::endl;
    std::cout<< result_ceil << std::endl;

    // fundamental types

    /*
    short - 2 bytes
    int - 4 bytes
    long - 4 byes
    long long - 8 bytes
    float - 4 byes
    double - 8 bytes - This is used most time, as float can result in loss of accuracy
    long double - 8 bytes
    bool - 1 byte
    char - 1 byte

    */

   // when ever storing the data value as float store it with F/f in the end

    double price = 99.99;
    float rate = 8.9f; 
    // if we dont write f then compiler will treat this no as double, tr to store double inside float variable - potential data loss
    
    long sizeOfFile = 100000L; // here also need to add L in the end, compilter will treat this no as int
    // hence to force compiler to treat this no as long we need L/l

    char letter  = 'r';
    bool isvalid = false;
    auto isthere = false;

    // if we remove suffix in auto var like, F or L then it will be treated as double and int respectively

    int number {}; // empty brace initializer will help declare var with 0 , if you dont want to initialize the variable
    std::cout<< number << std::endl;

    /* 
    we use hexa decimal no systems which is compact to represent colors
    number systems - binary, hexadecimals, decimals

    */

   int num = 0b11111111;
   int num_hex = 0xff; //  0xFF

   std::cout<< num << std:: endl;
   std::cout<< num_hex << std:: endl;
   
   return 0;

}
