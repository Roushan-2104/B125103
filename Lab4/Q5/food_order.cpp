#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
private:
    int orderId;
    string foodItem;
    int quantity;
    float price;

public:
    FoodOrder(int id, string item, int qty, float p) {
        orderId = id;
        foodItem = item;
        quantity = qty;
        price = p;
    }

    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f) {
    float totalBill = f.quantity * f.price;

    cout << "----- Order Details -----" << endl;
    cout << "Order ID   : " << f.orderId << endl;
    cout << "Food Item  : " << f.foodItem << endl;
    cout << "Quantity   : " << f.quantity << endl;
    cout << "Price : " << f.price << endl;
    cout << "Total Bill : " << totalBill << endl;
}

int main() {
    FoodOrder order1(501, "Chicken Biryani", 3, 150.0);
    calculateBill(order1);

    return 0;
}
