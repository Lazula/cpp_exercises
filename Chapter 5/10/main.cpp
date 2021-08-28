#include <string>

const size_t NUM_MONTHS = 12;

std::string MONTH_NAMES[NUM_MONTHS] = {
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December",
};

void print_names(std::string names[NUM_MONTHS]) {
	for (size_t i = 0; i < NUM_MONTHS; i++) {
		printf("%s\n", MONTH_NAMES[i].c_str());
	}
}

int main() {
	printf("Printing in main():\n");
	for (size_t i = 0; i < NUM_MONTHS; i++) {
		printf("%s\n", MONTH_NAMES[i].c_str());
	}

	printf("\nPrinting with function:\n");

	print_names(MONTH_NAMES);
}
