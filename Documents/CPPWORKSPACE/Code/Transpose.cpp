#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>>A(3,vector<int>(3,0));
    for(int i=0;i<A.size();++i)
    {
        for(int j=0;j<A[i].size();++j)
        {
            cout<<A[i][j]<< " ";
        }
        cout<<endl;
    }
}