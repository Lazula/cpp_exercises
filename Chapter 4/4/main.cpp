#include <stdio.h>

int main() {
	for (char c = 'a'; c <= 'z'; c++) {
		printf ("'%c' = %-3d (%#x)\n", c, int(c), int(c));
	}

	for (char c = '0'; c <= '9'; c++) {
		printf ("'%c' = %-3d (%#x)\n", c, int(c), int(c));
	}
}
