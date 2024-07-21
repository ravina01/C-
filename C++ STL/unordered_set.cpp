#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    std::unordered_set<int> uset = {10, 20, 30, 40, 50};

    // Insert more elements
    uset.insert(60);
    uset.insert(70);

    // Print the elements of the unordered_set
    std::cout << "Elements in the unordered_set: ";
    for (const int& element : uset) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
}