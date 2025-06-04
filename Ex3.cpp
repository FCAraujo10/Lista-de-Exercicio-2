#include <iostream>
using namespace std;

int main() 
{
  int n1, n2, n3;
    
	cout << "Digite o 1. numero: ";
	cin >> n1;
	cout << "Digite o 2. numero: ";
	cin >> n2;
	cout << "Digite o 3. numero: ";
	cin >> n3;
    
	int maior = n1;
    
  if(n2 > maior)
    {
		 maior = n2;
	}
	
    
  if(n3 > maior)
	{
		 maior = n3;
	}
     
    
     cout << "O maior valor eh: " << maior << endl;
    return 0;
}