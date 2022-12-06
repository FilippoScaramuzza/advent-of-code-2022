#include <iostream>
#include <string>

using namespace std;

int main() {
	int sum = 0;
	int i, j;
	string line1, line2, line3;
	bool found;
	
	while(getline(cin, line1)) {
		getline(cin, line2);
		getline(cin, line3);
		
		found = false;
		for(int i = 0; i < line1.size(); i++) {
			for(int j = 0; j < line2.size(); j++) {
				for(int k = 0; k < line3.size(); k++) {
					if(line1[i] == line2[j] && line2[j] == line3[k]) {	
						sum += (line1[i] >= 'A' && line1[i] <= 'Z') ?
							line1[i] - 'A' + 27:
							line1[i] - 'a' + 1;
						found = true;
						break;
					}
				}
				if(found) {
					break;
				}
			}
			if(found) {
				break;
			}
		}
	}

	cout << sum;
}
