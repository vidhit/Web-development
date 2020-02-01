#include<iostream>
using namespace std;

int main()
{
    string str="Vidhit";
    int n=str.size();
    for(int i=0,int j=n-1; i<n,j>=0; j--,i++)
        {
            str.at(i)=str.at(j);
    }
    cout<<str;
    return 0;
}