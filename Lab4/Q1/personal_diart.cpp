#include <iostream>
using namespace std;



class Diary{
    private:
        string name;
        int num_entries;
        string last_entry;

    public:
        Diary(string n, int ent, string last){
            name = n;
            num_entries = ent;
            last_entry = last;
        }


        friend void displayDiary(Diary d);
};

void displayDiary(Diary d){
    cout<<endl<<"-------Last Entry Details-------"<<endl;
    cout<<"Owner Name: "<<d.name<<endl;
    cout<<"Number of Entries: "<<d.num_entries<<endl;
    cout<<"Last Entry: "<<d.last_entry<<endl;
}


int main() {
    Diary d1("Aman",10,"Good Bye!!!");

    displayDiary(d1);
    return 0;
}