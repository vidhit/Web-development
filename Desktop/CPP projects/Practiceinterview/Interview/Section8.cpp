#include<iostream>

using namespace std;

int main()
{
    int amount{};
    int change_dollars{},change_quarters{},change_dime{},change_nickel{},change_penny{};
    cout<<"Enter an amount in cents : ";
    cin>>amount;
    int temp=amount%100;
    amount=amount/100;
    
        change_dollars=amount;
    //Quarters
    int temp_quarters=temp%25;
    amount=temp/25;
    
    
        change_quarters=amount;
    
    int temp_dime=temp_quarters%10;
    amount=temp_quarters/10;
    
        change_dime=amount;
    
    
    //Nickel
    
    int temp_nickel=temp_dime%5;
    amount=temp_dime/5;
    
    
        change_nickel=amount;
    
    
    //penny
    int temp_penny=temp_nickel%1;
    amount=temp_nickel/1;
    
        change_penny=amount;
    
    cout<<"You can provide change for this change as follows :"<<endl;
    cout<<"dollars : "<<change_dollars<<endl;
    cout<<"quarters : "<<change_quarters<<endl;
    cout<<"dimes : "<<change_dime<<endl;
    cout<<"nickels : "<<change_nickel<<endl;
    cout<<"pennies : "<<change_penny<<endl;
        
        return 0;
    
}