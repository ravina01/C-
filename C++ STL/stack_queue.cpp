#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    stack<int> stk;
    stk.push(9);
    stk.push(8);
    stk.push(7);

    queue<int> q; // Create a queue of integers

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<q.front();
    cout<<q.back();

    // cout<<q[1]<<endl;

    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    cout<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;


    // Create a min-heap priority queue of integers using a custom comparator
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq_min;

    // Push elements onto the priority queue
    pq_min.push(10);
    pq_min.push(30);
    pq_min.push(20);
    pq_min.push(5);

    cout<<pq_min.top()<<endl;

    
    return 0;
}