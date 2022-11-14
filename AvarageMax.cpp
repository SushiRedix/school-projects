#include <iostream> //Chiedi un tot di numeri, calcolare la media, trovare i numeri che superano la media

using namespace std;

int main() {
	
	int sum = 0; int n; int x;
	do {
		cout << "Inserisci i numeri desiderati: ";
		cin >> n;
	} while(n <= 0);
	
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		cout << "Digita il " << i + 1 << " numero: ";
		cin >> x;
		sum += x;
		
		arr[i] = x;
	}
	
	int avarage = sum / n;
	
	for(int a = 0; a < n; a++) {
		if(arr[a] > avarage) {
			cout << "Massimo: " << arr[a];
		}
	}
	return 0;
}
