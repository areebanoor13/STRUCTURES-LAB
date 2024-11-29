#include <iostream>
using namespace std;
struct product
 {
    int Code;
    string description;
    char Packaging;
    float Price;
    float Discount; 
};

int main() {
    product products[10] = {
        {101, "Product A", 'L', 500.0, 10.0},
        {102, "Product B", 'S', 150.0, 5.0},
        {103, "Product C", 'M', 250.0, 15.0},
        {104, "Product D", 'L', 800.0, 20.0},
        {105, "Product E", 'S', 300.0, 10.0},
        {106, "Product F", 'M', 400.0, 5.0},
        {107, "Product G", 'L', 1000.0, 25.0},
        {108, "Product H", 'S', 700.0, 10.0},
        {109, "Product I", 'M', 200.0, 30.0},
        {110, "Product J", 'L', 600.0, 10.0}
    };

    for (int i = 0; i < 10; i++) {
        if (products[i].Packaging == 'L') { 
            float netPrice = products[i].Price - (products[i].Price * products[i].Discount / 100);
            if (netPrice >= 200 && netPrice <= 1000) { 
                cout << "Code: " << products[i].Code
                     << ", Description: " << products[i].description
                     << ", Packaging: " << products[i].Packaging
                     << ", Price: " << products[i].Price
                     << ", Discount: " << products[i].Discount
                     << ", Net Price: " << netPrice << endl;
            }
        }
    }

    return 0;
}
