#include<iostream>
using namespace std;
#include<string>
#include<map>
int main()
{
    map<string,int> m;
    m["Christina"]=3;
    m["Elisabeth"]=1;
    m["Andrea"]=0;
    cout<<m["Elisabeth"];
    return 0;
}