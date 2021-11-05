#include <iostream>
#include <string>
#include <map>
#include <cassert>

using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::map;

int main() {
	map<string, float> pairs;
	string line;
	while (std::getline (cin, line)) {
		char open_paren, close_paren;
		char comma;
		string name;
		float value;

		cin >> open_paren >> name >> comma >> value >> close_paren;
		if (open_paren != '('
				|| comma != ','
				|| close_paren != ')') {
			cerr << "Invalid separators." << std::endl;
		}
		cout << open_paren << name << comma << value << close_paren << std::endl;
	}
}
