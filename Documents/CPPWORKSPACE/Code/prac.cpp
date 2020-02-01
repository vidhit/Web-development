#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int T,x,y,i,j,k,result;
    cin>>T;
    while(T--)
    {
        cin>>x>>y;
        /*if(x>y)
            cout<<x<<endl;
        else if(x<y)
            cout<<y<<endl;
        else
            cout<<"equal";*/
            result = gcd(x,y);
            cout<<result<<endl;
    }
    return 0;
}