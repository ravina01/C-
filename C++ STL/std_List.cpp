/*
List - linked List

*/

#include<iostream>
#include<list>
#include<vector>

using namespace std;

void printList(list<int>& nums)
{
    for(list<int>::iterator it = nums.begin(); it!= nums.end(); ++it)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list<int> nums = {1,2,3,4};

    auto it = nums.begin();

    printList(nums);
    cout<<endl;
    advance(it, 2);
    nums.insert(it, 9);
    printList(nums);

    return 0;

}