#include<iostream>
#include<string>

using namespace std;

bool isValidPalindrome(string& s)
{
    string filtered_string = ""; 
        for(auto& ch: s)
        {
            if(isalnum(ch) && ch!=' ')
            {
                filtered_string += tolower(ch);
            }
        }
        
        cout<<filtered_string<<endl;
        int left = 0;
        int right = filtered_string.length()-1;

        while(left<right)
        {
            if(filtered_string[left] != filtered_string[right])
            {
                return false;
            }
            left++;
            right--;
            
        }
}
int main()
{

    string s = "A man, a plan, a canal: Panama";
    bool flag = isValidPalindrome(s);
    cout<<flag<<endl;
    return 0;
}