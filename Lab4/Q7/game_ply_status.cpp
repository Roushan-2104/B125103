#include <iostream>
using namespace std;

class GameManager;

class Player{
    private:
        string ply_name;
        int health;
        int score;
        int level;

    public:
        Player(string name, int hl, int sc, int lv){
            ply_name = name;
            health = hl;
            score = sc;
            level = lv;
        }

        friend class GameManager;

};

class GameManager{
    public:
        void display(Player p1){
            cout<<"Player Name: "<<p1.ply_name<<endl;
            cout<<"Health: "<<p1.health<<endl;
            cout<<"Score: "<<p1.score<<endl;
            cout<<"Level: "<<p1.level<<endl;

            if(p1.health<0) cout<<endl<<"Player " << p1.ply_name<< " is Dead."<<endl;
            else cout<<endl<<"Player " << p1.ply_name<< " is Alive."<<endl;
        }
};
int main() {
    Player p1("Hurricane", 10, 100, 11);
    Player p2("Legend", 0, 1000, 100);

    GameManager g1;
    g1.display(p1);
    cout<<endl;
    g1.display(p2);

    return 0;
}