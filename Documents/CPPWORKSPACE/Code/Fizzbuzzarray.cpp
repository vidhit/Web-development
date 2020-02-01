#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> fizzBuzz(int n);
int main()
{
    vector<string> str;
    str = fizzBuzz(15);
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i];
    }
    return 0;
}

vector<string> fizzBuzz(int n) {
        
        vector<string> math;
        math[0]=" ";
        for(int i=1;i<=n;i++)
        {
            if(i%15==0)
            {
                //std::cout<<"FizzBuzz";
                math[i]="FizzBuzz";
                cout<<math[i];
            }
            else if(i%3==0)
            {
                //std::cout<<"Fizz";
                math[i]="Fizz";
            }
            else if(i%5==0)
            {
                //std::cout<<"Buzz";
                math[i]="Buzz";
            }
            else
            {
                math[i]=std::to_string(i);
            }
        }
        return math;
        
    }