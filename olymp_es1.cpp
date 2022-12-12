#include <iostream>

using namespace std;

int main() {
	int portals[8] = {1, 1, 1, 1, 1, 1, 1, 1}; //first is 1, second is 2. 1 is active 0 is inactive
	int seconds = 0;
	
	for(int pos = 0; pos != 9; pos++, seconds++) {
		cout << "POSITION: " << pos << endl;
		cout << "PORTAL STATUS: " << portals[pos] << endl;
		if(portals[pos] == 1) {
			portals[pos] = 0;
			pos = -1;
		}
		else if(portals[pos] == 0) {
			portals[pos] = 1;
		}
	}
	
	cout << "Seconds: " << seconds;
	
	return 0;
}
