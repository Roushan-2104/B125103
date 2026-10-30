#include <iostream>
using namespace std;

class LibraryAccess{
    protected:
        int nBooks_borrowed;
    public:
        LibraryAccess(int books){
            nBooks_borrowed = books;
        }
};

class LaboratoryAccess{
    protected:
        int pendingLabSub;
    LaboratoryAccess(int pLab){
        pendingLabSub = pLab;
    }
};

class StudentAccess : public LaboratoryAccess, public LibraryAccess{
    public:
        StudentAccess(int b, int p)
        : LibraryAccess(b), LaboratoryAccess(p) {}

         void display() {
        cout << "Books Borrowed: " << nBooks_borrowed << endl;
        cout << "Pending Lab Submissions: "
             << pendingLabSub << endl;

        if (nBooks_borrowed <= 5 && pendingLabSub == 0)
            cout << "Full Resource Access Granted" << endl;
        else
            cout << "Full Resource Access Denied" << endl;
        }
};

int main(){
    StudentAccess s(3, 0);
    s.display();

    return 0;
}

