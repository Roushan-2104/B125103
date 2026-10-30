#include <iostream>
using namespace std;

class Candidate {
protected:
    int candidateID;
    double attendance;

public:
    Candidate(int id, double a) {
        candidateID = id;
        attendance = a;
    }
};

class RegularCandidate : public Candidate {
public:
    RegularCandidate(int id, double a)
        : Candidate(id, a) {}

    void checkEligibility() {
        cout << "Regular Candidate ID: "
             << candidateID << endl;

        if (attendance >= 75)
            cout << "Eligible for Examination" << endl;
        else
            cout << "Not Eligible for Examination" << endl;
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(int id, double a)
        : Candidate(id, a) {}

    void checkEligibility() {
        cout << "Reappear Candidate ID: "
             << candidateID << endl;

        if (attendance >= 60)
            cout << "Eligible for Examination" << endl;
        else
            cout << "Not Eligible for Examination" << endl;
    }
};

int main() {
    RegularCandidate r(101, 80);
    ReappearCandidate re(102, 65);

    r.checkEligibility();
    cout << endl;
    re.checkEligibility();

    return 0;
}