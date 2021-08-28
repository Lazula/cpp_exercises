#include <string>
#include <cstring>
#include <iostream>

using std::string;
using std::cout;

int count_pairs_str(const string& input, const string& pair) {
	int count = 0;
	for (int i = 0; i < input.length()-1; i++) {
		if (input.substr(i, 2) == pair) {
			count++;
		}
	}
	return count;
}

int count_pairs_cstr(const char *input, const char *pair) {
	int count = 0;
	for (int i = 0; i < strlen(input)-1; i++) {
		if (input[i] == pair[0] && input[i+1] == pair[1]) {
			count++;
		}
	}
	return count;
}

int main() {
	string test_input = "xabaacbaaxabb";
	string test_pair = "ab";

	cout << "Counting occurences of \"" << test_pair << "\" in \""
		<< test_input << "\"." << std::endl;

	cout << "Using string processing: "
		<< count_pairs_str(test_input, test_pair) << std::endl;

	cout << "Using char* processing: "
		<< count_pairs_cstr(test_input.c_str(), test_pair.c_str()) << std::endl;
}
