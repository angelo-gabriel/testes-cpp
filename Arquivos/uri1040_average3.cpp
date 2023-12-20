#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float n1, n2, n3, n4;
    float media = 0.0;
    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1 * 2)+(n2 * 3)+(n3 * 4)+(n4 * 1))/(2 + 3 + 4 + 1);
    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if(media >= 5.0 && media < 6.9) {
        cout << "Aluno em exame." << endl;
        float n5;
        cin >> n5;
        media = (media + n5) / 2;
        if(media >= 5.0) {
            cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << media << endl;
        } else {
            cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << media << endl;
        }
    } else {
        cout << "Aluno reprovado." << endl;
    }
    return 0;
}
