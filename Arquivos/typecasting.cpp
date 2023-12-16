#include <iostream>
using namespace std;

int main() {
    cout << (5/3) << endl;
    // Typecasting = change of resulting datatype
    // ====+ Implicit typecasting +====
    cout << (5 / 3.0) << endl;
    cout << (5.0 / 3) << endl;    

    // Char + Int
    char letter = 'A';
    cout << letter << endl;
    cout << letter + 1 << endl;
    letter += 1;
    cout << letter << endl;;

    char ch = 67;
    cout << ch << endl;
    // ====+ -------------------- +====
    return 0;
}
