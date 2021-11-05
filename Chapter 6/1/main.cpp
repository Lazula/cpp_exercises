#include <iostream>
#include <string>
#include <cassert>

using std::string;

int main() {
	string input_line = "1?\n2?\n3?\n";
	int max_length = input_line.length();
	int i = 0;
	int quest_count = 0;
	while (i < max_length) {
		if (input_line[i] == '?') {
			quest_count++;
		}

		i++;
	}

	assert (quest_count == 3);

	const char *p = input_line.c_str();
	quest_count = 0;
	while (*p++) {
		if (*p == '?') {
			quest_count++;
		}
	}

	assert (quest_count == 3);

	std::cout << "Success!" << std::endl;
}
