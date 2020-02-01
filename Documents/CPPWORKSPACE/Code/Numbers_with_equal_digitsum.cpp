#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    vector<int> sample{51,17,71,42};
    map<int,int> digit;
    int temp;
    int running_sum=0;
    for(int i=0;i<sample.size();++i)
    {
        temp=sample[i];
        running_sum=0;
        while(temp>0)
        {
            temp=sample[i]%10;//1
            sample[i]=sample[i]/10;//
            running_sum+=temp;//1+5=6
        }
        digit[sample[i]]=running_sum;
        
    }
    for(map<int,int>::iterator it=digit.begin();it!=digit.end();++it)
    {
        if()
    }
    
}