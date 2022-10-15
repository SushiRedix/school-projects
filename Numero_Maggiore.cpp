#include <iostream>

using namespace std;

int UserInput() {
	int x{};
	cin >> x;
	return x;
}

int main() {
	int max{};
	int x{};
	cout << "Inserisci il numero di ripetizioni: ";
	cin >> x;
	for(int i = 0; i < x; i++) {
		int a{UserInput()};
		if(a > max) {
			max = a;
		}
	}	
	
	cout << "Max: " << max;
	
	return 0;
}
