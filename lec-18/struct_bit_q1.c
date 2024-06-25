#include <stdio.h>

struct test {
	// Unsigned integer member x --> 4 bytes
	unsigned int x;
	// Bit-field member y with 33 bits --> 4 bytes
	unsigned int y:33;
	// Unsigned integer member z --> 4 bytes
	unsigned int z;
};

int main()
{
	// Print the size of struct test
	printf("%lu", sizeof(struct test));

	return 0;
}

