#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Digite os lados do triangulo: ";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Forma um triangulo: ";
        if (a == b && b == c)
            cout << "Equilatero" << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles" << endl;
        else
            cout << "Escaleno" << endl;
    } else {
        cout << "Nao forma triangulo" << endl;
    }
    return 0;
}
