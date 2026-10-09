#include <iostream>
using namespace std;

class Score{
    int score;

    public:
        Score(int s){
            score = s;
        }

        Score operator++(){
            ++score;
            return *this;
        }
        Score operator++(int){
            Score temp = *this;
            ++score;
            return temp;
        }
        void display(){
            cout<<score<<endl;
        }
};

int main() {
    Score obj1(99), obj2(111);

    Score prefixObj = ++obj1;
    Score postfixObj = obj2++;

    cout << "Prefix result: ";
    prefixObj.display();

    cout << "Score after prefix: ";
    obj1.display();

    cout << "Postfix result: ";
    postfixObj.display();

    cout << "Score after postfix: ";
    obj2.display();

    return 0;
}