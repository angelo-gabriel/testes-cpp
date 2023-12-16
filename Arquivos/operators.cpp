#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 10;
    // Compound Assignment Operators
    a += 7;
    cout << "A = " << a << endl;
    a -= 4;
    cout << "A = " << a << endl;
    a *= 10;
    cout << "A = " << a << endl;

    // Increment and Decrement Operators
    int c = 1;
    int d = 2;
    c++;
    d--;
    cout << c << endl;
    cout << d << endl;

    // Behaviour
    int x = 10;
    int y = x++; // post increment
    int z = ++x; // pre increment
    cout << "X, Y " << x << "," << y << endl;
    cout << "X, Z " << x << "," << z << endl;
    return 0;
}