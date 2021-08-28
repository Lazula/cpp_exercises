int main() {
	typedef unsigned char uchar;
	typedef const unsigned char cuchar;
	typedef int* int_ptr;
	typedef char** char_ptrptr;
	typedef char char_arr[];
	typedef int *array_of_seven_integer_pointers[7];
	typedef array_of_seven_integer_pointers* array_of_seven_integer_pointers_ptr;
	typedef array_of_seven_integer_pointers eight_arrays_of_seven_integer_pointers[8];
	typedef eight_arrays_of_seven_integer_pointers array_of_eight_arrays_of_seven_integer_pointers[];
}
