#include <stdio.h>

int main(void) {

	const char SMALL_A = 'a';
	const int FOURTY_TWO = 42;
	const float PI = 3.14;
	
	printf("char: %c, int: %d, float: %f, string: %s\n", SMALL_A, FOURTY_TWO, PI, "this is a string");
	printf("Use \\n to print the \"next line\" \n\n\n\n");

	return 0;
}
