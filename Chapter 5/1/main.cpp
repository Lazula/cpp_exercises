#include <string>

int main() {
	char *pointer_to_char = (char *) "string";
	int array_of_ten_integers[10] = {1, 2, 3};
	char *pointer_to_array_of_strings[] = {
		(char *) "string 1",
		(char *) "string 2",
		(char *) "string 3",
	};
	char **pointer_to_char_pointer = (char **) malloc(10 * sizeof(char *));
	const int constant_integer = 3;
	const int* pointer_to_constant_integer = &constant_integer;
	int *const constant_pointer_to_integer = (int *) array_of_ten_integers;
}
