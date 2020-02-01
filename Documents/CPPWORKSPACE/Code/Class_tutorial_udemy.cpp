#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player {
    public:
    //attributes
    string name;
    int health{100};
    int xp{3};
    
    //methods
    void talk(string text)
    {
        cout<<"Frank says "<<text<<"there"<<endl;
        
    }
    bool is_dead();
    
};

class Account
{
    public:
    //attributes
    string name{"Account"};
    double balance{0.0};
    
    //methods
    
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account frank_account;
    Account jim_account;
    
    Player Frank;//Frank is an object of Player
    Frank.name="Frank";
    Frank.health=200;
    Frank.xp=5;
    Player hero;//hero is an object of Player
    
    Player players[]{Frank,hero}; //players is an array of Player objects
    
    vector<Player> player_vec {Frank};
    player_vec.push_back(hero);
    
    Player*enemy {nullptr};
    enemy=new Player;
    (*enemy).name="Enemy";
    enemy->health=200;
    enemy->xp=6;
    enemy->talk("I will destroy you");
    
    delete enemy;
    return 0;
}