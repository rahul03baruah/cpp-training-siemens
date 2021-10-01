// Example program
#include <iostream>
#include <string>
using namespace std;

class Tank {
    public:
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void defense() = 0;
    //move towards
    //move aaway
    //hapazard move
};

class AggressiveTank : public Tank {
    public:
        void move() { cout << "Move Towards Enemy" << endl; } //move towards
        void attack() { cout << "Attack Enemy" << endl; } //attack enemy
        void defense() { cout << "Cover Fire" << endl; } //cover fire
};

class DefensiveTank : public Tank {
    public:
        void move() { cout << "Move Away From Enemy" << endl; } //move away
        void attack() { cout << "No Attack" << endl; } //no attack
        void defense() { cout << "Hide From Enemy" << endl; }  //hide
};

class GurillaTank : public Tank {
    public:
        void move() { cout << "Hapazard Move" << endl; } //hapazard move
        void attack() { cout << "Attack Enemy And Run" << endl; } //attack and run
        void defense() { cout << "Duck From Enemy Fire" << endl; }  //duck
};


class TankFactory {
    public:
        template<typename T>
        Tank * createTank() { return new T;}
};

void action(Tank *tank) {
    tank->move();
    tank->attack();
    tank->defense();
}


int main()
{
  TankFactory tankF;
  Tank *aT = tankF.createTank<AggressiveTank>();
  Tank *aD = tankF.createTank<DefensiveTank>();
  Tank *aG = tankF.createTank<GurillaTank>();
  action(aT);
  cout << "********************" << endl;
  action(aD);
  cout << "********************" << endl;
  action(aG);
}
