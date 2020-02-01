#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    int c=0;
    string s="1+12-3";
     c=c+stoi(static_cast<string>(s[0]));
     cout<<c;
     return 0;
}
