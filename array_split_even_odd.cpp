#include <iostream>

using namespace std;

int main() {
	const int CMAX = 100;
	int arrA[CMAX];
	int EVEN[CMAX];
	int ODD[CMAX];
	int n;
	int oddCounter = 0;
	int evenCounter = 0;
	
	do {
		cout << "Inserisci il numero di elementi: ";
		cin >> n;
	} while (n <= 0 || n > CMAX);
	
	for(int i = 0; i < n; i++) {
		cout << "Inserisci l'elemento: ";
		cin >> arrA[i];
		
		if(arrA[i] % 2 == 0) {    //Pari
			EVEN[evenCounter] = arrA[i];
			evenCounter++;
		}
		else {
			ODD[oddCounter] = arrA[i];
			oddCounter++;
		}
	}
	
	cout << "ARRAY PARI" << endl;
	for(int i = 0; i < evenCounter; i++) {
		cout << EVEN[i] << ": Indice " << i << endl;
	}
	
	cout << "ARRAY DISPARI: " << endl;
	for(int i = 0; i < oddCounter; i++) {
		cout << ODD[i] << ": Indice " << i << endl;
	}
	
	return 0;
}
