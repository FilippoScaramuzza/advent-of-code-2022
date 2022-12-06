#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
	string line, sline;
	getline(cin, line);
	int byte_no = 4;

	for(int i = 0; i < line.length() - byte_no; i++) {
		sline = line.substr(i, byte_no);
		sort(sline.begin(), sline.end());
		
		// Check if the substring has all distinct characters
		set<char> s(sline.begin(), sline.end());
		if(sline.length() == s.size()) {
			cout << i + byte_no;
			break;
		}
	}
}
