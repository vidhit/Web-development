#include<iostream>
using namespace std;

int main()
{
    int n,m,i=0;
    cin>>n;
    string str;
    while(n>1)
    {
        cin>>str;
        if(str==" ")
            n--;
    }
    cin>>m;
    string commands[m];
    for( i=0;i<commands.size;i++)
    {
        cin>>commands[i];
        cout<<endl;
       
    }
    return 0;
}