#include <__nullptr>
#include <cstddef>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int score = 0;
	string line;

	while(getline(cin, line)) {
		string op = line.substr(0, 1);
		string me = line.substr(2, 3);

		if(me == "X") {
			if(op == "A") {
				score += 3;
			}
			else if(op == "B") {
				score += 1;
			}
			else {
				score += 2;
			}
		}
		else if(me == "Y") {
			score += 3;
			if(op == "A") {
				score += 1;
			}
			else if(op == "B") {
				score += 2;
			}
			else {
				score += 3;
			}
		}
		else {
			score += 6;
			if(op == "A") {
				score += 2;
			}
			else if(op == "B") {
				score += 3;
			}
			else {
				score += 1;
			}
		}
	}
	
	cout << score;
}
