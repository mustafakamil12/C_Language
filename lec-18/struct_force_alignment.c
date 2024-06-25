// C Program to illustrate the use of forced alignment in

/*
You can declare a bit-field as a _Bool (C), bool (C++), char, signed char, unsigned char, short, unsigned short, int, unsigned int, 
long, unsigned long, long long, or unsigned long long data type. 

The alignment of a bit-field depends on its base type and the compilation mode (64-bit for Blue Gene®/Q).

- C: The length of a bit-field cannot exceed the length of its base type. In extended mode, you can use the sizeof operator on a bit-field. 
     The sizeof operator on a bit-field always returns the size of the base type.

- C++: The length of a bit-field can exceed the length of its base type, but the remaining bits are used to pad the field, and do not 
       actually store any value.

However, alignment rules for aggregates containing bit-fields are different depending on the alignment mode in effect. These rules are described below.

Rules for bit-packed alignment:
-------------------------------
- Bit-fields have an alignment of 1 byte, and are packed with no default padding between bit-fields.
- A zero-length bit-field causes the next member to start at the next byte boundary. If the zero-length bit-field is already at 
  a byte boundary, the next member starts at this boundary. A non-bit-field member that follows a bit-field is aligned on the next 
  byte boundary.
*/

// structure using bit fields
#include <stdio.h>

// A structure without forced alignment
struct test1 {
	unsigned int x : 5;
	unsigned int y : 8;
};

// A structure with forced alignment
struct test2 {
	unsigned int x : 5;
	unsigned int : 0;
	unsigned int y : 8;
};

int main()
{
	printf("Size of test1 is %lu bytes\n",
		sizeof(struct test1));
	printf("Size of test2 is %lu bytes\n",
		sizeof(struct test2));
	return 0;
}

