#include<iostream>
#include<thread>

void DoWork()
{

}

int main()
{
    std::thread worker(DoWork);// takes in function pointer

    // wait for thread to finish
    worker.join();
    return 0;
}