#include <limits>
#include <iostream>

int main() {
	std::cout
		<< "char\n"
		<< "-----\n"
		<< "min: " << static_cast<int>(std::numeric_limits<char>::min()) << "\n"
		<< "max: " << static_cast<int>(std::numeric_limits<char>::max()) << "\n"
		<< "\n";

	std::cout
		<< "short\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<short>::min() << "\n"
		<< "max: " << std::numeric_limits<short>::max() << "\n"
		<< "\n";

	std::cout
		<< "int\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<int>::min() << "\n"
		<< "max: " << std::numeric_limits<int>::max() << "\n"
		<< "\n";

	std::cout
		<< "long\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<long>::min() << "\n"
		<< "max: " << std::numeric_limits<long>::max() << "\n"
		<< "\n";

	std::cout
		<< "float\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<float>::min() << "\n"
		<< "max: " << std::numeric_limits<float>::max() << "\n"
		<< "\n";

	std::cout
		<< "double\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<double>::min() << "\n"
		<< "max: " << std::numeric_limits<double>::max() << "\n"
		<< "\n";

	std::cout
		<< "long double\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<long double>::min() << "\n"
		<< "max: " << std::numeric_limits<long double>::max() << "\n"
		<< "\n";

	std::cout
		<< "unsigned\n"
		<< "-----\n"
		<< "min: " << std::numeric_limits<unsigned>::min() << "\n"
		<< "max: " << std::numeric_limits<unsigned>::max() << "\n"
		<< "\n";
}
