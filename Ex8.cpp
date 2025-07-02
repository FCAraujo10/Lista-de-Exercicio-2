#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    cout << "Digite os lados do triangulo: ";
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {
        if (a * a == b * b + c * c || 
            b * b == a * a + c * c || 
            c * c == a * a + b * b)
            cout << "Triangulo retangulo" << endl;
        else
            cout << "Nao e triangulo retangulo" << endl;
    } else {
        cout << "Nao forma triangulo" << endl;
    }
    return 0;
}
