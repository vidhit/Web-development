//Lambda expressions

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    [](){}; //Simplest lambda which does nothing
  int i=10;
    auto SayHelloWorld=[=](int a,int b)->int//[=] adds all variables used inside lambda function
    {
       // cout<<"Lambda expressions"<<endl;
       return a+b+i;//  i   cannot be used in lambda as it is defined outside the lambda function
       //i is read only as we are passing by value and not by reference so we cannot modify i value inside a lambda function
    };
    cout<<SayHelloWorld(180,10);
    return 0;
}