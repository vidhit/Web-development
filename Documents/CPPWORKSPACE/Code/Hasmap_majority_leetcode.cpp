#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums{3,2,3};
    int cut_off=nums.size()/2;
    int ans=0;
    map<int,int> major;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();++i)
    {
        if(major.count(nums[i])==0)
        {
            major.insert(make_pair(nums[i],1));
            for(auto x:major)
                cout<<x.first<< " " <<x.second<<endl;
        }
        else
        {
            major[nums[i]]=major[nums[i]]+1;
            cout<<major[i];
            for(auto s:major)
                cout<<s.first<< " " <<s.second<<endl;
             
        }
    }
    
    for(map<int,int>::iterator it=major.begin();it!=major.end();++it)
    {
        if(it->second>cut_off)
            ans=it->first;
    }
    cout<<ans;
    return 0;
}