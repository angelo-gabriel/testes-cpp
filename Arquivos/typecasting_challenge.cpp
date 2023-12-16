#include <iostream>
#include <iomanip> //including header file to set precision

using namespace std;

int main() {
    int a, b, c, d, e;
    
    cin >> a >> b >> c >> d >> e;
    int sum = a + b + c + d + e;

    // explicit typecasting
    cout << fixed << setprecision(4) << (float)sum/5 << endl;
    return 0;
}