#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    double delta;

    cin >> a >> b >> c;

    delta = pow(b, 2) - (4.0 * a * c);

    // Verificando a possibilidade de calculo das raizes
    if (delta < 0.0 || a == 0.0) {
        cout << "Impossivel calcular" << endl;
    } else {
        float r1, r2;
        // Calculando as raizes
        r1 = (-(b) + sqrt(delta)) / (2.0 * a);
        r2 = (-(b) - sqrt(delta)) / (2.0 * a);

        cout << "R1 = " << fixed << setprecision(5) << r1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << r2 << endl;
    }

    return 0;
}
