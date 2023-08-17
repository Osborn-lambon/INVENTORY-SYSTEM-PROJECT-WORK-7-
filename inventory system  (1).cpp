#include <iostream>
#include <string>

const int NUM_PRODUCTS = 4; // Number of products in the inventory

class Product {
public:
    std::string name;
    int quantity;
    double price;
    // Add more details as needed
    
    Product() : name(""), quantity(0), price(0.0) {}
};

int main() {
    Product inventory[NUM_PRODUCTS];

    // Sample initialization of products
    inventory[0].name = "Product A";
    inventory[0].quantity = 10;
    inventory[0].price = 9.99;

    inventory[1].name = "Product B";
    inventory[1].quantity = 5;
    inventory[1].price = 19.99;

    inventory[2].name = "Product C";
    inventory[2].quantity = 8;
    inventory[2].price = 14.50;

    inventory[3].name = "Product D";
    inventory[3].quantity = 15;
    inventory[3].price = 5.00;

    // Displaying the inventory
    std::cout << "Inventory:\n";
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        std::cout << "Name: " << inventory[i].name << "\n";
        std::cout << "Quantity: " << inventory[i].quantity << "\n";
        std::cout << "Price: $" << inventory[i].price << "\n";
        std::cout << "-------------------\n";
    }

    return 0;
}
