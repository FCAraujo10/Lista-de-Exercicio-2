#include <iostream>
using namespace std;

int main() {
    float base, altura;
    cout << "Digite base e altura: ";
    cin >> base >> altura;
    float area = base * altura;
    cout << "Area: " << area << endl;
    if (area > 100)
        cout << "Terreno grande" << endl;
    return 0;
}
