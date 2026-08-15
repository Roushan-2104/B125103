#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int ProductID;
    string ProductName;
    float Price;
    int Quantity;

    void accept() {
        cout << "Enter Product ID: ";
        cin >> ProductID;
        cout << "Enter Product Name: ";
        cin >> ProductName;
        cout << "Enter Price: ";
        cin >> Price;
        cout << "Enter Quantity: ";
        cin >> Quantity;
    }

    void display() {
        cout << "Product ID: " << ProductID << endl;
        cout << "Product Name: " << ProductName << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl;
        cout << "Total Cost: " << Price * Quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product **products = new Product*[n];

    for (int i = 0; i < n; i++){
        products[i] = new Product;
        cout<< "Product "<<i+1<<" Details: "<<endl;
        products[i]->accept();
    }
    cout<<endl<<"----YOUR BILL----"<<endl;
    float totalInventory = 0;
    for (int i = 0; i < n; i++) {
        products[i]->display();
        totalInventory += products[i]->Price * products[i]->Quantity;
    }

    cout << "\nOverall Inventory Value: " << totalInventory << endl;

    for (int i = 0; i < n; i++) {
        delete products[i];
        products[i] = nullptr;
    }
    delete[] products;
    products = nullptr;
    return 0;
}
