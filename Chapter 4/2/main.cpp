#include <string>
#include <complex>

// char ch;
char ch = 'a';
// std::string s;
std::string s = "string";
// int count = 1;
int count;
// const double pi = 3.1415926535897932385;
/* It's impossible to not define a const because it will default to 0. */
// extern int error_number;
/* Initializing externs is illegal */

/* Must cast string constants explicitly to conform to C++11 */
// char *name = (char *) "Njal";
char *name;
// char *season[] = {
// 	(char *) "spring",
// 	(char *) "summer",
// 	(char *) "fall",
// 	(char *) "winter"
// };
char *season[] = {};
/* Arrays without a declared size must be initialized. */

// struct Date { int d, m, y; };
struct Date;
// int day(Date *p) { return p->d; }
int day(Date *p);
// double sqrt(double);
double sqrt(double) { return 0; }
// template<class T> T abs(T a) { return a < 0 ? -a : a; }
template<class T> T abs(T a);

// typedef std::complex<short> Point;
/* N/A */
// struct User;
struct User { std::string username, password; };
// enum Beer { Carlsberg, Tuborg, Thor };
enum Beer {};
// namespace NS { int a; }
namespace NS {};

int main() {}
