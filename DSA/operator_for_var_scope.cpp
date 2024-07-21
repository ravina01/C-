/*
Bitwise operartor, and or, xor, not & | ^ ~
not can make nos -ve also not of 4 is -5
left - Multi not always and righ - divide shift - sometime sno can get -ve in left shift if the no is too large
17 >> 1 - 8 - right shift once is divide by 0
17 >> 2 - 4 - divide by 2 x 2

19 << 1 - left shift 38 19 x 2
19 << 2 - 76 - 19 x 2x 2
for loops - can have multiple var inside ffor
for(int i =0, x = 7; i< 9 && x > 6; i++, x++)
operatyor precedence
var scoping


leetcoode questions- difference of indi prod and sum
no of 1s

*/
#include<iostream>

using namespace std;
int noofones(uint32_t n)
{
    int count = 0;
    while(n != 0)
    {
        if(n&1)
        {
            count++;
        }
        n = n>>1;
    }

    return count;
}

bool isPrime(int num)
{   
    for(int i=2; i<num;i++)
    {
        if(num%i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }

    }
}

int product_minus_sum(int num)
{
    int sum = 0;
    int prod = 1;
    while( num!=0 )
    {
        int rem= num%10;
        
        sum+= rem;
        prod *= rem;
        num = num/10;
        // continue;

    }
    int difference = abs(prod-sum);
    return difference;
}

int main()
{
    //left shift - multi
    cout<<( 19 << 1)<<endl; // 38

    //right shitf - divide
    cout<<(17>>1)<<endl; // 8

    cout<<"operator increament and decreament "<<endl;
    int x = 8;
    int y = 1;

    cout<<x++<<endl;//8
    cout<<x<<endl;//9

    cout<<++y<<endl;//2
    cout<<y<<endl;//2

    int c =1;
    cout<<c--<<endl;

    int sum = 0;
    for(int i = 0; i< 10; i++)
    {
        sum += i;
    }
    cout<<"sum = "<<sum<<endl;

    bool flag = isPrime(7);
    cout<<flag<<endl;


    static int a =3;
    cout<<a <<endl;

    if(1)
    {
        ++a;
        // int a = 5;
        cout<<a<<endl;
    }

    cout<<a<<endl;

    int diff = product_minus_sum(12345);//105
    cout<<diff<<endl;

    int count = noofones(0000001111);
    cout<<count<<endl;
    return 0;

}