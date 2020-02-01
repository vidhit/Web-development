#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,213,324,454,15,46,};
    int n=sizeof(a)/sizeof(a[0]);
    n=n-1;
    //cout<<n;
    int k,b=0,target;
    cout<<"Enter element to be searched";
    cin>>target;
    while(b<=n)
    {
        k=(b+n)/2;
        if(a[k]==target)
        {
            cout<<"Target found at index:"<<k;
            break;
        }
        else if(a[k]>target)
        {
            n=k-1;
        }
        else
        {
            b=k+1;
        }
            
    }
    return 0;
}