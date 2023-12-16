#include <iostream>
#include <iomanip>  // Problema 1038 do beecrowd(URI)

using namespace std;

int main() {
    // Declarando variáveis
    int x, y;
    float preco = 0.00;
    // Recebendo input
    cin >> x >> y;

    // Utilizando switch/case para resolução do problema
    switch(x) {
        case 1:
          preco = y * 4.0;
          cout << "Total: R$ " << fixed << setprecision(2) << preco << endl;
          break;
        case 2:
          preco = y * 4.50;
          cout << "Total: R$ " << fixed << setprecision(2) << preco << endl;
          break;
        case 3:
          preco = y * 5.0;
          cout << "Total: R$ " << fixed << setprecision(2) << preco << endl;
          break;
        case 4:
          preco = y * 2.0;
          cout << "Total: R$ " << fixed << setprecision(2) << preco << endl;
          break;
        case 5:
          preco = y * 1.50;
          cout << "Total: R$ " << fixed << setprecision(2) << preco << endl;
          break;
    }
    return 0;
}