#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int UserInput() {
	int x{};
	cin >> x;
	return x;
}

int main() {
	int randomNumber{};
	int userInput{};
	int counter{};
	
	srand(time(NULL));
	randomNumber = 1 + rand() % 10;
	
	cout << "Ho pensato un numero compreso tra 1 e 10" << endl; 
	cout << "Indovinalo in 3 tenativi" << endl;
	
	do {
		counter++;
		cout << "Tentativo " << counter << ": ";
		userInput = UserInput();
		if(userInput < randomNumber && userInput != randomNumber) {
			cout << "Il numero e' piu' grande..." << endl;
		}
		else if(userInput != randomNumber) {
			cout << "Il numero e' piu' piccolo..." << endl;
		}
	} while(userInput != randomNumber  && counter <= 3);
	
	if(userInput == randomNumber) {
		cout << "Hai indovinato!";
		system("curl parrot.live");
	}
	else {
		cout << "Sei un coglione!";
	}
	
	return 0;
}
