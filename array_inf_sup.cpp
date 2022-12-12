#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	int min;
	int sup;
	
	int arr[100];
	int check[100];
	
	do {
		cout << "Inserisci il numero minimo: ";
		cin >> min;
		cout << "Inserisci il numero massimo: ";
		cin >> sup;
	} while(min >= sup);
	
	srand(time(NULL));
	
	for(int i = 0; i < 100; i++) {
		arr[i] = min + rand() % (sup - min + 1);
		check[i] = arr[i];
		cout << arr[i] << endl;
	}
	
	for(int i = 0; i < 100; i++) {
		if(arr[i] == check[i]) {
			//remove
		}
	}
	
	return 0;
}
