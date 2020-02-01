#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int t,n,skill,i=0;
    int max=-1;
    int j=1;
    int k=0;
    int sum=0;
    int team=5;
    int count=0;
    int f=0;
    vector<int>case_no;
    
    vector<int>result;
  //map<int,vector<int>,greater<int>>game;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        count=0;
        k=0;
        i=0;
        case_no.push_back(n*5);
        multimap<int,vector<int>,greater<int>>game;
        while(n>0)
        {
            i=0;
            sum=0;
            vector<int>A;
            while(team>0)
            {
                cin>>skill;
                A.push_back(skill);
                --team;
            }
            sort(A.begin(),A.end(),greater<int>());
            for(int i=0;i<A.size();++i)
                sum+=A[i];
            
            game.insert(make_pair(sum,A));
            --n;
            team=5;
        }
    
        //Test input
        
   for(multimap<int,vector<int>,greater<int>>::iterator it=game.begin();it!=game.end();++it)
   {
       for(auto vec_iter=it->second.begin();vec_iter!=it->second.end();++vec_iter)
       {
           //cout<<*vec_iter<< " ";
           result.push_back(*vec_iter);
           
       }
   }
    }
 
    
    for(int s=0;s<case_no.size();++s)
    {
        
        cout<<"Case #"<<j<<":"<< endl;
        while(case_no.at(f)>0 && i<result.size())
        {
        cout<<result.at(i)<< " ";
         case_no.at(f)-=1;
         ++i;
        ++count;
         if(count%5==0)
            cout<<endl;
        }
        ++j;
        ++f;
        }
       
        
        

    
    return 0;
}