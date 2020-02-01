#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int evaluate(char[]);
int evaluatea(string);
bool isOperand(char);
int value(char);
int main()
{
    string holder;
    map<string,char> watson;
    watson["plus"]='+';
    watson["minus"]='-';
    watson["times"]='*';
    watson["tothepowerof"]='^';
    int t;
    cin>>t;
    string s;
    vector<string> input;
    vector<int>result;
    while(t--)
    {
        cin>>s;
        input.push_back(s);
    }

  for(int i=0;i<input.size();++i)
  {
      holder=input.at(i);
      holder=regex_replace(holder,regex("plus"),"+");
      holder=regex_replace(holder,regex("minus"),"-");
      holder=regex_replace(holder,regex("times"),"*");
      holder=regex_replace(holder,regex("tothepowerof"),"^");
      cout<<holder<<endl;
      char arr[holder.length()+1];
      strcpy(arr,holder.c_str());
      int res=evaluate(arr);
      cout<<res<<endl;
      result.push_back(res);
  }
  for(int i=0;i<result.size();++i)
  {
      cout<<"Case #"<<i+1<<":"<<" "<<result.at(i)<<endl;
  }
  return 0;
}
  int value(char c)
  {
      return (c-'0');
  }
  
  int evaluatea(string holder)
  {
      int result=0;
   for(int i=0;i<holder.length();++i)
   {
       result=result+value(holder[i]);
   }
   return result;
  }
  int evaluate(char holder[])
  {
       int res=value(holder[0]);
      for(int i=1;holder[i]!='/0';i+=2)
      {
            char opr=holder[i];
            char opd=holder[i+1];
            //if(!isOperand(opd))
               // return -1;
            if(opr=='+')
            {
                res+=value(opd);
                cout<<res;
            }
            else if(opr=='-')
            {
                res-=value(opd);
                //cout<<res;
            }
           else if(opr=='*')
            {
                res*=value(opd);
            }
           else if(opr=='^')
            {
                res^=value(opd);
            }
            else
                return -1;
     
      }
       return res;
  }
  bool isOperand(char c) 
  {
        return (c >= '0' && c <= '9'); 
   }
    
