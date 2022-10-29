#include <string>
#include <iostream>
#include <windows.h>
#include <cstdio>


using namespace std;

int main() {
	int width, height;
	cout << "Inserisci la larghezza del quadrato: ";
	cin >> width;
	cout << "Inserisci l'altezza del quadrato: ";
	cin >> height;
	for(int y = 0; y < height; y++) {
		if(y != 0) {
			cout << "" << endl;
		}
		for(int x = 0; x < width; x++) {
			if(y == 0) {
				cout << "°";
				continue;
			}
			if(y == height - 1) {
				cout << "°";
				continue;
			}
			if(x == 0 || x == width) {
				cout << "°";
			}
			else {
				if(x == 0 || x == width - 1) {
					cout << "°";
				} 
				else {
					cout << " ";
				}
			}
		}
	}
	
	return 0;
}
