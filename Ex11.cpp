#include <iostream>
using namespace std;

int main() {
    float p1, p2;
    cout << "Digite a nota P1: ";
    cin >> p1;
    p2 = (5 * 3 - p1) / 2;
    cout << "Voce precisa tirar " << p2 << " na P2 para ser aprovado." << endl;
    return 0;
}
