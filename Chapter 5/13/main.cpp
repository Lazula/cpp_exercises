#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::cin;

/* Basic date implementation */
struct date {
	int year;
	int month;
	int day;
};
typedef struct date Date;

/* Returns a new string with a Date* formatted in RFC-3339 (YYYY-MM-DD)
 * format. */
string date_str(Date *d) {
	std::ostringstream output;
	if (d->year > 9999 || d->month > 12 || d->day > 31
		|| d->year < 0 || d->month < 0 || d->day < 0) {
		return "Invalid date passed to date_str().";
	}

	output
		<< std::setfill('0') << std::setw(4) << d->year
		<< "-" << std::setfill('0') << std::setw(2) << d->month
		<< "-" << std::setfill('0') << std::setw(2) << d->day;

	return output.str();
}

/* Allocates a new Date* with malloc() and sets values.
 * Returns a pointer to the new Date, or 0 if malloc() fails. */
Date *new_date(int year, int month, int day) {
	Date *out = (Date *) malloc (sizeof(Date));
	if(!out) return 0;

	out->year = year;
	out->month = month;
	out->day = day;

	return out;
}

/* Reads an RFC-3339 YYYY-MM-DD formatted date string from the given input
 * stream. Returns a pointer to the new Date, or 0 if malloc() fails. */
Date *read_date_from_stream(std::istream& instream) {
	Date *out = (Date *) malloc (sizeof(Date));

	instream >> out->year;
	instream.ignore(1);
	instream >> out->month;
	instream.ignore(1);
	instream >> out->day;

	return out;
}

int main() {
	Date *d;

	d = new_date(1999, 12, 1);
	cout << "The C99 ISO-9899 standard was released " << date_str(d) << "." << std::endl;
	free(d);

	cout << std::endl << "Please enter a date (YYYY-MM-DD): " << std::flush;
	d = read_date_from_stream(cin);

	cout << "You entered the following date: " << date_str(d) << "." << std::endl;
	free(d);
}
