#include <iostream>
using namespace std;

class Result;

class Exam{
    private:
        string st_name;
        float marks;
        string subject;
        int max_marks;

    public:
        Exam(string name, float mks, string sub, int maxmks){
            st_name = name;
            marks = mks;
            subject = sub;
            max_marks = maxmks;
        }
        friend class Result;
};

class Result{
    public:
        void execute(Exam sem1){
            float percentage;
            percentage = (sem1.marks/sem1.max_marks)*100;

            cout<<"Student Name: "<<sem1.st_name<<endl;
            cout<<"Subject: "<<sem1.subject<<endl;
            cout<<"Marks: "<<sem1.marks <<" / "<<sem1.max_marks<<endl;
            cout<<"Overall Percentage: "<< percentage<< " % "<<endl;
            cout<<"Passing Status: "<<(percentage<40?"Fail":"Pass")<<endl;
        }
};


int main() {
    Exam sem1("Aman", 50, "MPMC", 80);
    Exam sem2("Aarav", 20, "MPMC", 80);

    Result r1;
    r1.execute(sem1);
    cout<<endl;
    r1.execute(sem2);
    return 0;
}