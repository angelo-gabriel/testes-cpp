#include <iostream>
using namespace std;

int main() {
    // Explicit typecasting
    int x = 5;
    cout << (float)x/3 << endl;

    char letter = 'A';
    cout << letter + 1 << endl;
    cout << (char)(letter + 1) << endl;

    cout << (bool)5 + 1 << endl;
    return 0;
}