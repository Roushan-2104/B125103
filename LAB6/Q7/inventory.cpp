#include <iostream>
using namespace std;

class InventoryItem {
    int productID, quantity;
    double unitPrice;

public:
    InventoryItem(int id, double price, int qty) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }

    InventoryItem operator+(InventoryItem item) {
        if (productID == item.productID &&
            unitPrice == item.unitPrice) {
            return InventoryItem(productID, unitPrice,
                                 quantity + item.quantity);
        }

        cout << "Incompatible inventory items!" << endl;
        return *this;
    }

    void display() {
        cout << "Product ID: " << productID
             << ", Unit Price: " << unitPrice
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 20);

    InventoryItem i3 = i1 + i2;

    cout << "Combined inventory: ";
    i3.display();

    cout << "Original item 1: ";
    i1.display();

    return 0;
}