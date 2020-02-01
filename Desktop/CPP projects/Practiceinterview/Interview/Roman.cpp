#include<iostream>
#include<map>
#include<vector>
using namespace std;

int romanToInt(string s) {
        map<string,int> roman;
        vector<char>store;
        roman["I"]=1;
        roman["II"]=2;
        roman["III"]=3; 
        roman["IV"]=4;
        roman["V"]=5;
        roman["VI"]=6;
        roman["VII"]=7;
        roman["VIII"]=8;
        roman["IX"]=9;
        roman["X"]=10;
        roman["XX"]=20;
        roman["XXX"]=30;
        roman["XXXX"]=40;
        roman["L"]=50;
        roman["XXXXXX"]=60;
        roman["C"]=100;
        roman["D"]=500;
        roman["M"]=1000;
        
        for(int i=0;i<s.length();i++)
        {
            store.push_back(s[i]);
        }
        
        for(int i=0;i<store.size();i++)
        {
            for(auto a:roman)
            {
               if(a.first==s[i])
                {
                    val=val+roman[a.first];
                }
            }
        }
        
        return val;
        
}

int main()
{
    string s;
    cout<<"Enter string";
    cin>>s;
    int ans=romanToInt(s);
    cout<<ans;
    return 0; 
    
}