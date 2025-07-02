#include <iostream>
using namespace std;

int main() {
    float peso, altura;
    cout << "Digite peso e altura: ";
    cin >> peso >> altura;
    float r = peso / (altura * altura);
    if (r < 20)
        cout << "Abaixo do peso" << endl;
    else if (r < 25)
        cout << "Peso ideal" << endl;
    else
        cout << "Acima do peso" << endl;
    return 0;
}
