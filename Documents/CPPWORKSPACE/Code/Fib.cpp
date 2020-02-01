#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    
    else if(n==1){
       return 1;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
    //return fib(n);
}

int main()
{
    int n;
    cout<<"Enter value of n";
    cin>>n;
    int i=0;
    int sum= fib(n);
   cout<<sum;

  
   return 0;
    
}