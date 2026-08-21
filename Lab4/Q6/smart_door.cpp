#include <iostream>
using namespace std;
class SecuritySystem;

class Door{
    private:
        int door_num;
        bool lock_stat;

    public:
        Door(int num, bool stat){
            door_num = num;
            lock_stat = stat;
        }
        friend class SecuritySystem;
};

class SecuritySystem{
    public:
        void checkSecurity(Door d1){
            cout<<"Door Number: "<< d1.door_num<<endl;
            cout<<"Lock Status: "<< (d1.lock_stat ? "Locked" : "Unlocked")<<endl;
        }
};
int main() {
    Door d1(1, true);
    Door d2(2, false);

    SecuritySystem s1;
    s1.checkSecurity(d1);
    cout<<endl;
    s1.checkSecurity(d2);
    return 0;
}