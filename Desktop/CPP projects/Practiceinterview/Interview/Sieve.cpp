#include<vector>
#include<iostream>
using namespace std;
int count_prime_sieve(int n)
{
int count=0;
       vector<int> sieve(n);
       for(int x=2;x<=n;x++)
       {
           if(sieve[x])
               continue;
           for(int u=2*x;u<=n;u=u+x)
           {
               sieve[u]=x;
           }
           
        }

        
        for(int i=2;i<=sieve.size();i++)
        {
            if(sieve[i]==0)
                count++;
        }
        
        return count;
        }
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int ans=count_prime_sieve(n);
    cout<<ans;
    return 0;
    }