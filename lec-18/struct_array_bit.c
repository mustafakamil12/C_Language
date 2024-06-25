// C Program to illustrate that we cannot have array bit
// field members
#include <stdio.h>

// structure with array bit field
struct test {
	unsigned int x:5;
};

int main() {}

