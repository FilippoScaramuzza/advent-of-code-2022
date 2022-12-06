#include <iostream>
#include <string>

using namespace std;

int main() {
	string line;
	int answer = 0;

	while(getline(cin, line)) {
		string first = line.substr(0, line.find(','));
		string second = line.substr(line.find(',') + 1, line.length());
		
		int first_1 = stoi(first.substr(0, first.find('-')));
		int first_2 = stoi(first.substr(first.find('-') + 1, first.length()));
		int second_1 = stoi(second.substr(0, second.find('-')));
		int second_2 = stoi(second.substr(second.find('-') + 1, second.length()));

		if((first_1 >= second_1 && first_1 <= second_2) 
			|| second_1 >= first_1 && second_1 <= first_2
			|| first_2 >= second_1 && first_2 <= second_2
			|| second_2 >= first_1 && second_2 <= first_2) {
			answer++;
		}
	}

	cout << answer;
}
