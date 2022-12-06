#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
	int stack_no;
	string line;
	stack<char> *read_stacks;
	stack<char> *stacks;

	bool first_line = true;
	bool stack_init = true;
	while(getline(cin, line)) {
		if(first_line) {
			stack_no = (line.length() + 1) / 4;
			read_stacks = new stack<char>[stack_no];
			stacks = new stack<char>[stack_no];

			first_line = false;
		}

		if(line.find('[') != string::npos) {
			// Still looking at cranes
			for(int i = 0; i < line.length(); i+=4) {
				if(line[i] == '[') {
					read_stacks[(i+4)/4 - 1].push(line[i+1]);
				}
			}
		}
		else if (line != "" && line.find("move") != string::npos){
			if(stack_init) {
				for(int i = 0; i < stack_no; i++) {
					while(!read_stacks[i].empty()) {
						char c = read_stacks[i].top();
						stacks[i].push(c);
						read_stacks[i].pop();
					}
				}
				stack_init = false;
			}

			// Array of strings
			string *tokens = new string[6];
			stringstream s(line);
			s >> tokens[0] >> tokens[1] >> tokens[2] >> tokens[3] >> tokens[4] >> tokens[5];

			int crane_no = stoi(tokens[1]);
			int from = stoi(tokens[3]) - 1;
			int to = stoi(tokens[5]) - 1;
			
			for(int i = 0; i < crane_no; i++) {
				stacks[to].push(stacks[from].top());
				stacks[from].pop();
			}
		}
	}

	for(int i = 0; i < stack_no; i++) {
		cout << stacks[i].top();
	}
}
