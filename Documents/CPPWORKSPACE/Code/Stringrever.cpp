#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter string :";
    cin>>str;
    int i,j,n;
    char temp;
    n=str.size();
    for(i=0,j=n-1;i<j;i++,j--){
        temp=str.at(i);
        str.at(i)=str.at(j);
        str.at(j)=temp;
    }
    cout<<str;
    return 0;
}