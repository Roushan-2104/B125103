#include <iostream>
#include <cstdlib>
using namespace std;

class Wallet {
private:
    int id;
    double balance;
    double* transactions;
    int numTransactions;

public:
    Wallet(int id);
    ~Wallet();

    void transaction(double amount);
    void transaction(double amount, char type);

    friend bool largerBalance(const Wallet& wallet1, const Wallet& wallet2);

    double getBalance() const;
};

Wallet::Wallet(int id) : id(id), balance(0.0), numTransactions(0) {
    transactions = new double[100]; // Initialize with a fixed size
}

Wallet::~Wallet() {
    delete[] transactions;
}

void Wallet::transaction(double amount) {
    if (amount >= 0) {
        balance += amount;
    } else {
        balance += amount; 
    }
    transactions[numTransactions++] = amount;
}

void Wallet::transaction(double amount, char type) {
    if (type == 'D' || type == 'd') {
        transaction(amount);
    } else if (type == 'W' || type == 'w') {
        transaction(-amount);
    } else {
         cerr << "Invalid transaction type." <<  endl;
        exit(1);
    }
}

bool largerBalance(const Wallet& wallet1, const Wallet& wallet2) {
    return wallet1.balance > wallet2.balance;
}

double Wallet::getBalance() const {
    return balance;
}

int main() {
    Wallet wallet1(1);
    wallet1.transaction(100.0);
    wallet1.transaction(50.0, 'w');

    Wallet wallet2(2);
    wallet2.transaction(200.0);
    wallet2.transaction(25.0, 'D');

     cout << (largerBalance(wallet1, wallet2) ? "Wallet 1 has a larger balance." : "Wallet 2 has a larger balance.") <<  endl;

     cout << "Wallet 1 balance: " << wallet1.getBalance() <<  endl;
     cout << "Wallet 2 balance: " << wallet2.getBalance() <<  endl;

    return 0;
}
