#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n;
    cin>>t>>n;
    cout<<endl;
    string s;
    while(n>=0)
        getline(cin,s);
    cout<<s;
    return 0;
}