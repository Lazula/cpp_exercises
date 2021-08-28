void f(char c) {
	return;
}


void g(char &c) {
	return;
}


void h(const char &c) {
	return;
}


int main() {
	char c;
	unsigned char uc;
	signed char sc;

	f('a');
	g(49);
	h(3300);
	
	f(c);
	g(uc);
	h(sc);
}
