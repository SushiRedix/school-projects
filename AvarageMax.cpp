#include <iostream> //Chiedi un tot di numeri, calcolare la media, trovare i numeri che superano la media

using namespace std;

int main() {
	int sum = 0; int n; int x; int max = 0;
	do {
		cout << "Inserisci i numeri desiderati: ";
		cin >> n;
	} while(n <= 0);
	
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
		
		arr[i] = x;
	}
	
	int avarage = sum / n;
	
	for(int a = 0; a < n; a++) {
		if(arr[a] > avarage) {
			max = arr[a];
		}
	}
	
	cout << "Massimo: " << max;
	return 0;
}
