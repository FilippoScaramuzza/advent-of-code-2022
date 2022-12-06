#include <iostream>
#include <string>

using namespace std;

int main() {
	int score = 0;
	string line;

	while(getline(cin, line)) {
		string opponent = line.substr(0, 1);
		string me = line.substr(2, 3);
		
		if(opponent == "A") {
			if(me == "X") {
				score += 1 + 3;
			}
			else if(me == "Y") {
				score += 2 + 6;
			}
			else {
				score += 3 + 0;
			}
		}
		else if(opponent == "B") {
			if(me == "X") {
				score += 1 + 0;
			}
			else if(me == "Y") {
				score += 2 + 3;
			}
			else {
				score += 3 + 6;
			}
		}
		else if(opponent == "C") {
			if(me == "X") {
				score += 1 + 6;
			}
			else if(me == "Y") {
				score += 2 + 0;
			}
			else {
				score += 3 + 3;
			}
		}
	}

	cout << score << endl;
}
