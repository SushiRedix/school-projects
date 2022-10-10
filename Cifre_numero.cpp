#include <iostream>

using namespace std;

int main() {
	int a, sum, temp;
	cout << "Inserisci un numero positivo: ";
	cin >> a;
	while(a < 0) {
		cout << "Numero non valido, riprova: ";
		cin >> a;
	}
	
	while(a != 0) {
		temp = a % 10;
		sum += temp;
		a /= 10;
	}
	
	cout << "Somma = " << sum;
	return 0;
}
