#include <string>
#include <tuple>
#include <vector>

int main() {
	enum ex_enum_1 {
		min = -100000000,
		max = 20000000000U,
	};

	enum ex_enum_2 {
		auto0,
		auto1,
		auto2,
	};

	static const std::vector<std::tuple<std::string, size_t>> sizedefs = {
		{ "char",        sizeof(char) },
		{ "short",       sizeof(short) },
		{ "int",         sizeof(int) },
		{ "long",        sizeof(long) },
		{ "long long",   sizeof(long long) },
		{ "float",       sizeof(float) },
		{ "double",      sizeof(double) },
		{ "long double", sizeof(long double) },
		{ "char *",      sizeof(char *) },
		{ "int *",       sizeof(int *) },
		{ "uintptr_t",   sizeof(uintptr_t) },
		{ "ex_enum_1",   sizeof(ex_enum_1) },
		{ "ex_enum_2",   sizeof(ex_enum_2) },
	};

	for (const std::tuple<std::string, size_t> &sizedef : sizedefs) {
		printf ("sizeof(%s): %zu\n", std::get<0>(sizedef).c_str(), std::get<1>(sizedef));
	}
}
