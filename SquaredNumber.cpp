#include <iostream>

using namespace std;

int main() {
	int n;
	int sum;
	
	cout << "Inserisci il numero da elevare al quadrato: ";
	cin >> n;
	
	for(int i = 0; i < n * 2; i++) {
		if(i % 2 != 0) {
			sum += i;
		}
	}
	
	cout << "Il quadrato del numero e': " << sum;
	return 0;
}
