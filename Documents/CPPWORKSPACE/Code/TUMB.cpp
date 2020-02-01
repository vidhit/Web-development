#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include<regex>
using namespace std;

int main()
{
    int t,n,k=0;
    vector<int>case_no;
    int start_pos=0;
    int sub_length=0;
    int j=1;
    int f=0;
    cin>>t;
    getchar();
    string s;
    string temp;
    vector<string> sentence;
    while(t>0)
    {
        cin>>n;
        //s=nullptr;
        case_no.push_back(n);
        getchar();
        while(n>0)
        {
           getline(cin ,s);
           
           if(s=="enten")
           {
               s= regex_replace(s,regex("enten"),"ierende");

           }
           if(s=="ent")
           {
            s=regex_replace(s,regex("ent"),"ierender");

           }
           if(s=="entin")
           {
               s= regex_replace(s,regex("entin"),"ierende");

           }
         int temp_enten=s.find("enten");
         //cout<<temp_enten;
         
            if(temp_enten>=0)
           {    
              s=regex_replace(s,regex("enten"),"ierende");
           }
            int temp_entin=s.find("entin");
             if(temp_entin>=0)
           {
             s=regex_replace(s,regex("entin"),"ierende");
           }
            int temp_ent=s.find("ent");
           if(temp_ent>=0)
           {
                s= regex_replace(s,regex("ent"),"ierender");
           }
         
           sentence.push_back(s);
           //cout<<s;
        --n;
    }
    --t;
    
    }
   // for(int i=0;i<sentence.size();++i)
    //{
        int i=0;
      for(int t=0;t<case_no.size();++t)
         { 
      
        cout<<"Case #"<<j<<":"<<endl;
        while(case_no.at(f)>0 &&i<sentence.size() )
        {
        cout<<sentence.at(i)<<endl;
        case_no.at(f)-=1;
        ++i;
        }
        ++j;
        ++f;
         }
        //cout<<"Case #"<<j<<":"<<endl;
    //}
    
        //cout<<s<<endl;
    
    return 0;
}