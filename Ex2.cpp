#include <iostream>
using namespace std;

int main()
{
	double n1;
	double n2;
	
	cout << "Digite o 1. numero: ";
	cin >> n1;
	cout << "Digite o 2. numero: ";
	cin >> n2;
	
	if ( n1 > n2 )
	{
		cout << "O numero " << n1 << " eh maior que " << n2 << endl;
	}
	
	if ( n2 > n1 )
	{
		cout << "O numero " << n2 << " eh maior que " << n1 << endl;
	}
	
	if ( n1 == n2 ) 
	{
		cout << "Ambos dos Numeros sao identicos" << endl;
	}
	
	return 0;
}