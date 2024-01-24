#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player // class name iS CAPITALISED
{            // attributes
    public:
    string name{"player1"};
    int health{100};
    int xp{3};

    // methods
    void talk(string text_to_say){
    cout<<name<<" says "<<text_to_say<<endl;
    }
    bool is_dead();
};

class Account
{
    public:
    string name{"Account"};
    double balance{0.0};
    bool deposit(double bal){balance+=bal; cout<<"In deposit"<<endl;}
    bool withdraw(double bal){balance-=bal; cout<<"In withdraw"<<endl;}
};
int main()
{
    Account account_1;
    Account account_2;
    account_1.name="My account";
    account_1.balance=50000.0;

    account_1.deposit(1000.0);
    account_1.withdraw(500.0);


    Player hero;
    Player villain;
    Player players[]{hero, villain};
    vector<Player> player_vec{hero};
    player_vec.push_back(villain);

    Player *enemy{nullptr};
    enemy = new Player;

    hero.name="Rasie";
    hero.health=100;
    hero.xp=14;
    hero.talk("Let's Play");
    (*enemy).name="Latham";
    (*enemy).health=100;
    enemy->xp=17;//same as above
    enemy->talk("You won't win!");


    delete enemy;
    return 0;
}