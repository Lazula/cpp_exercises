#include <string>
#include <cstdio>

const size_t NUM_MONTHS = 12;

char MONTH_NAMES[][NUM_MONTHS] = {
	"Janurary",
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

unsigned char MONTH_DAYS[NUM_MONTHS] = {
	31,
	28,
	31,
	30,
	31,
	30,
	31,
	31,
	30,
	31,
	30,
	31,
};

struct month {
	std::string name;
	unsigned char num_days;
};

typedef struct month Month;

Month MONTHS[NUM_MONTHS] = {
	{ "Janurary", 31 },
	{ "February", 28 },
	{ "March", 31 },
	{ "April", 30 },
	{ "May", 31 },
	{ "June", 30 },
	{ "July", 31 },
	{ "August", 31 },
	{ "September", 30 },
	{ "October", 31 },
	{ "November", 30 },
	{ "December", 31 },
};

int main() {
	printf("Printing data with separate arrays:\n");
	for (size_t i = 0; i < NUM_MONTHS; i++) {
		printf("%s: %u\n", MONTH_NAMES[i], MONTH_DAYS[i]);
	}

	printf("\nPrinting data with struct array:\n");
	for (size_t i = 0; i < NUM_MONTHS; i++) {
		printf("%s: %u\n", MONTHS[i].name.c_str(), MONTHS[i].num_days);
	}
}
