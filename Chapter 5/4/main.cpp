#include <cassert>

void swap_ptr(int *a, int *b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void swap_ref(int &a, int &b) {
	int temp = b;
	b = a;
	a = temp;
}

int main() {
	int a = 5;
	int b = 8;

	swap_ptr(&a, &b);
	assert(a == 8);
	assert(b == 5);
	
	swap_ref(a, b);
	assert(a == 5);
	assert(b == 8);
}
