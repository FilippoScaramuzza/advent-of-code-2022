#include <iostream>
#include <string>

using namespace std;

int main() {
	int sum = 0;
	int i, j;
	string line;
	bool found;
	
	while(getline(cin, line)) {
		found = false;
		for(int i = 0; i < line.size() / 2; i++) {
			for(int j = line.size() / 2; j < line.size(); j++) {
				if(line[i] == line[j]) {
					sum += (line[i] >= 'A' && line[i] <= 'Z') ?
						line[i] - 'A' + 27:
						line[i] - 'a' + 1;
					found = true;
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
