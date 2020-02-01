#include<iostream>
#include<thread>
#include<string>



void worker(int ,std::string t)
{
    
}
int main()
{
    std::string s="Test";
    int i=1;
    std::thread t(worker,i,s);
    t.join();
    return 0;
}