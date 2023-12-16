#include <iostream>
using namespace std;

int main() {
    // Const = read-only value
    const int raio = 4;
    // Initialization is a must for constants
    const float pi = 3.14;

    float area = pi * (raio * raio);
    cout << "A area e igual a: " << area << endl;

    return 0;
}