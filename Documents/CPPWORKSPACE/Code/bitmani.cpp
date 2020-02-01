#include<iostream>
using namespace std;
#include<bitset>
int main()
{
    bitset<10>s(string("0100101010"));
    cout<<s[4];
    return 0;
}