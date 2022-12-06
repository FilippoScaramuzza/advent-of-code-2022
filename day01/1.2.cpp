#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int abs_sum_1 = 0;
	int abs_sum_2 = 0;
	int abs_sum_3 = 0;
	int sum = 0;
	string line;

	while(getline(cin, line)) {
		if(line == "") {
			if(sum > abs_sum_1) {
				abs_sum_3 = abs_sum_2;
				abs_sum_2 = abs_sum_1;
				abs_sum_1 = sum;
			}
			else if(sum > abs_sum_2) {
				abs_sum_3 = abs_sum_2;
				abs_sum_2 = sum;
			}
			else if(sum > abs_sum_3) {
				abs_sum_3 = sum;
			}
			sum = 0;
		}
		else{
			sum += stoi(line);
		}
	}

	if(sum > abs_sum_1) {
		abs_sum_3 = abs_sum_2;
		abs_sum_2 = abs_sum_1;
		abs_sum_1 = sum;
	}
	else if(sum > abs_sum_2) {
		abs_sum_3 = abs_sum_2;
		abs_sum_2 = sum;
	}
	else if(sum > abs_sum_3) {
		abs_sum_3 = sum;
	}

	cout << abs_sum_1 + abs_sum_2 + abs_sum_3;
}
