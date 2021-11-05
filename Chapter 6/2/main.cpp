#include <iostream>
#include <string>
#include <cassert>

int a = b = c = d = 0;

int main() {
	a = b + c * d << 2 & 8;
	(a & 077) != 3;
	(a == b) || (a == c) && (c < 5);
}
