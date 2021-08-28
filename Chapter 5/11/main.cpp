#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::set;
using std::vector;

int do_set_implementation() {
	set<string> words;
	string current_word;

	cout << "Enter a list of words terminated by \"Quit\"." << std::endl;

	while (true) {
		std::getline(cin, current_word);
		if (current_word == "Quit") {
			break;
		}
		words.insert(current_word);
	}

	cout << std::endl << "Provided words, sorted without duplicates:" << std::endl;

	for (const string &word : words) {
		cout << word << std::endl;
	}

	return 0;
}

int do_vector_implementation() {
	vector<string> words;
	string current_word;

	cout << "Enter a list of words terminated by \"Quit\"." << std::endl;

	while (true) {
		std::getline(cin, current_word);
		if (current_word == "Quit") {
			break;
		}
		words.push_back(current_word);
	}

	/* Manually sort and remove duplicates */
	std::sort(words.begin(), words.end());
	words.erase(std::unique(words.begin(), words.end()), words.end());

	cout << std::endl << "Provided words, sorted without duplicates:" << std::endl;

	for (const string &word : words) {
		cout << word << std::endl;
	}

	return 0;
}

int main() {
	string input_str;

	cout << "Enter V for vector implementation "
		"or S for set implementation (default vector) [V/s]: ";
	getline(cin, input_str);

	if (input_str == "s") {
		cout << "Using set implementation." << std::endl;
		return do_set_implementation();
	} else {
		cout << "Using vector implementation." << std::endl;
		return do_vector_implementation();
	}
}
