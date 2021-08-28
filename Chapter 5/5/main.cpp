#include <string>

int main() {
	char char_arr[] = "a short string";
	std::string str = "a short string";
	printf("size of char str[] = \"a short string\": %zu\n", sizeof(char_arr));
	printf("length of string str = \"a short string\": %zu\n", str.length());

	printf("\nchar[] includes terminating \\0 in its size.\n");
}
