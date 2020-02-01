#include<iostream>
#include<map>
#include<vector>
using namespace std;

string day_of_week(string s,int k)
{
    int mod;
    int day;
    int fin_day;
    string s_final;
    map<string,int> days;
    days["Mon"]=0;
    days["Tue"]=1;
    days["Wed"]=2;
    days["Thu"]=3;
    days["Fri"]=4;
    days["Sat"]=5;
    days["Sun"]=6;
    
    if(k>=7)
    {
        mod=k%7;
    }
    else
    {
            mod=k;
    }
    
    day=days[s]+mod;
    if(day>=7)
    {
        fin_day=day%7;
    }
    else
    {
        fin_day=day;
    }
    
    for(map<string,int>::iterator it=days.begin();it!=days.end();++it)
    {
        if(it->second==fin_day)
        {
            s_final=it->first;
        }
    }
    return s_final;
}


int main()
{
    string s;
    cout<<"Enter string value : ";
    cin>>s;
    cout<<"Enter value of k : ";
    int k;
    cin>>k;
    cout<<day_of_week(s,k)<<endl;
    return 0;
}