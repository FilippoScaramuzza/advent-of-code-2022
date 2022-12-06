#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int abs_sum = 0;
	int sum = 0;
	string line;

	while(getline(cin, line)) {
		if(line == "") {
			if(sum > abs_sum) {
				abs_sum = sum;
			}
			sum = 0;
		}
		else{
			sum += stoi(line);
		}
	}

	cout << abs_sum << endl;
}
