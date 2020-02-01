#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
       vector<int> arr{3,5,-2,-3,-6,-6};
       sort(arr.begin(),arr.end());
        vector<int>freq;
        map<int,int> occur;
        bool ans=true;
        for(int i=0;i<arr.size();++i)
        {
            occur[arr[i]]++;
        }
        for(auto x:occur)
            cout<<x.first<< " " <<x.second<<endl;
        for(map<int,int>::iterator it=occur.begin();it!=occur.end();++it)
        {
            freq.push_back(it->second);
            cout<<it->second<< " ";
        }
        for(auto i:freq)
            cout<<i<<endl;
            
        std::sort(freq.begin(),freq.end());
        for(int i=0;i<freq.size()-1;++i)
        {
            if(freq.at(i)==freq.at(i+1))
                ans=false;
        
        }
        
        cout<<ans;
        return 0;
}