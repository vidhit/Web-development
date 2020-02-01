#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t,m;
    cin>>t;
    const unsigned long long c=299792458; 
    unsigned long long E;
    vector<int>mass;
    while(t>0)
    {
            cin>>m;
            mass.push_back(m);
            --t;
    }
    for(int i=0;i<mass.size();++i)
    {
        E=mass.at(i)*c*c;
        cout<<"Case #"<<i+1<<":"<< " "<<E<<endl;
    }
    return 0;
}