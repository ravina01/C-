/*
Condistions - loops, 
*/

#include<iostream>
using namespace std;

// int main()
// {
//     int n=0;
//     cout<<"n = "<<n<<endl;
//     cout<< "enter any no -";
//     cin>>n;
//     n += 2;
//     cout<<"n = "<<n<<endl;

//     char ch;
//     cout<<"enter char = ";
//     cin>>ch;
//     if (ch> 96 && ch <123)
//     {
//         cout<< "its lower case";
//     }
//     else if (ch > 64 && ch < 91 )
//     {
//         cout<< "its Upper case";
//     }
//     else if(ch >= 0 && ch <=9)
//     {
//         cout<<"its a no";

//     }
//     else
//     {
//         cout<< "Invalid";
//     }



//     return 0;

// }

bool isprime(int num)
{
    cout<<"IN"<<endl;
    int i = num-1;
    while(i != 1)
    {
        if(num % i == 0)
        {
            return false;
        }
        i--;
    }
    return true;
}
int main()
{
    int i =1 ;
    int n = 10;
    int sum = 0;
    while(i<=n)
    {
        sum = sum+i;
        
        i++;
    }
    cout<<"sum = "<< sum<<endl;

    bool flag = isprime(4);
    cout<<"flag = "<< flag<< endl;
    return 0;

}