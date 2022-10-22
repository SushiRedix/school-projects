#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int UserInput() {
	int x{};
	cin >> x;
	return x;
}

int main() {
	const int N_RAND = 10;
	int i {0};
	
	time_t seconds;
	
	cout << "Inserisci il seed: ";
	seconds = time(NULL);
	int seed{seconds};
	
	srand(seed);
	while(rand() != 6) {
		cout << rand()<< endl;
		i++;
	}
	return 0;
}
