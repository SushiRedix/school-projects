#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	cout << "Inserisci la misura del primo lato: " << endl;
	cin >> a;
	cout << "Inserisci la misura del secondo lato: " << endl;
	cin >> b;
	cout << "Inserisci la misura del terzo lato: " << endl;
	cin >> c;
	
	if(a == b && b == c) {
		cout << "Il triangolo e' equilatero";
		return 0;
	}
	else if(a != b && b != c) {
		cout << "il triangolo e' scaleno";
		return 0;
	}
	else if(a == b && (c != b && c!= a)) {
		cout << "Il triangolo e' isoscele";
		return 0;
	}
	else{
		cout << "Che cos'e' sta cosa";
		return 1;
	}
	
	return 0;
}
