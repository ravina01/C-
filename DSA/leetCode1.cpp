/*

Reverse int
*/
#include<iostream>
int reverseInt(int num)
{
    int ans = 0;
    while(num != 0)
    {
        int digit = num%10;
        if((ans> INT32_MAX/10) || (ans < INT32_MIN/20))
        {
            ans = (ans *10) + digit;
        num /= 10;
        }
        

    }
    return ans;
}


int main()
{
    std::cout<<reverseInt(-2345);
}