#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double salario, reajuste;
    float final;

    cin >> salario;
    if (salario > 2000.00) {
        reajuste = 4.0 /100;
        final = salario + (salario * reajuste);
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salario * reajuste) << endl;
        reajuste *= 100;
        cout << "Em percentual: " << int(reajuste) << " %" << endl;
    } else if (salario <= 2000.00 && salario >= 1200.01) {
        reajuste = 7.0 /100;
        final = salario + (salario * reajuste);
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salario * reajuste) << endl;
        reajuste *= 100;
        cout << "Em percentual: " << int(reajuste) << " %" << endl;
    } else if (salario <= 1200.00 && salario >= 800.01) {
        reajuste = 10.0 /100;
        final = salario + (salario * reajuste);
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salario * reajuste) << endl;
        reajuste *= 100;
        cout << "Em percentual: " << int(reajuste) << " %" << endl;
    } else if (salario <= 800.00 && salario >= 400.01) {
        reajuste = 12.0 /100;
        final = salario + (salario * reajuste);
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salario * reajuste) << endl;
        reajuste *= 100;
        cout << "Em percentual: " << int(reajuste) << " %" << endl;
    } else if (salario <= 400.00 && salario > 0) {
        reajuste = 15.0 /100;
        final = salario + (salario * reajuste);
        cout << "Novo salario: " << fixed << setprecision(2) << final << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << (salario * reajuste) << endl;
        reajuste *= 100;
        cout << "Em percentual: " << int(reajuste) << " %" << endl;
    }
    return 0;
}
