#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5(s1);//Apple
    string s6(s1,0,3);//App
    string s7(10,'X');//XXXXXXXXXX
    
    cout<<s0<<endl;//No garbage
    cout<<s0.length()<<endl;//empty string
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;
}