// C Program to illustrate the structure without bit field
#include <stdio.h>

// A simple representation of the date
struct date {
	unsigned int d; // 4 bytes
	unsigned int m; // 4 bytes
	unsigned int y; // 4 bytes
};

int main()
{
	// printing size of structure
	printf("Size of date is %lu bytes\n",
		sizeof(struct date));
	struct date dt = { 31, 12, 2014 };
	printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);
}

