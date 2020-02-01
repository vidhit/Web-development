#include<iostream>
using namespace std;
#include<vector>

int main()
{
    double n,k;
    int count=0;
    double l=0.0;
    int s=0;
    double div=0.0;
    vector<int>store{3};
    //cin>>n;
    cout<<endl;
    
       cin>>k>>l;
       div=k/l;
       //cout<<div;
    
    for(int i=2;i<;i++)
    {
        count=0;
        for(int t=1;t<=i;t++)
        {
            if(i%t==0)
            {
                count++;
            }
        }
        if(count<=2)
        {
           // cout<<i;
           
           // cout<<store[s];
          store[s]=i;
           s++;
            
        }
       
        
    }
       for(int h=0;h<store.size();h++)
           {
               cout<<store[h];
           }
       
       for(int h=0;h<store.size();h++)
           {
               if(h+1<store.size())
                {
                if(div==store[h]/store[h+1]);
                {
                    //cout<<store[h]<<store[h+1];
                }
               }
       }

    
   
    
    return 0;
}