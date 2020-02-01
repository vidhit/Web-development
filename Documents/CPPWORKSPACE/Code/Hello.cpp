#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    vector<string> s;
    string name;
    while(t>0)
    {
        cin>>name;
        s.push_back(name);
        --t;
    }
    for(int i=0;i<s.size();++i)
    {
          cout<<"Case #"<<i+1<<":"<< " " <<"Hello"<< " "<<s.at(i)<<"!"<<endl;
    }
    return 0;
}