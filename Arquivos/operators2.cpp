#include <iostream>
using namespace std;

int main() {
    cout << "Relational Operators: " << endl;
    cout << "1 = TRUE // 0 = FALSE" << endl;
    cout << (3 >= 2) << endl;

    int a = 1;
    int b = 2;
    cout << (a != b) << endl;
    cout << (a == b) << endl;

    cout << "Logical Operators: " << endl;
    int money = 15;
    int phone_price = 12;
    bool sale = true; // 1

    // Logical AND
    if (money > phone_price && sale) {
        cout << "Buy phone!" << endl;
    } else {
        cout << "Do something else." << endl;
    }

    // Logical OR
    cout << ((1 > 0) || (5 > 13)) << endl;

    // Not (unary)
    cout << (!sale) << endl; // 0
    return 0;
}