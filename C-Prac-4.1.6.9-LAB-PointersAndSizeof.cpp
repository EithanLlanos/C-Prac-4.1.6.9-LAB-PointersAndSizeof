//Scenario
//Write a simple program that prints the size of types in your architecture.Check this for all basic types, variables of some types, and some pointers - like the expected output list below.
//Your version of the program must print the same result as the expected output, unless you are working in a different architecture.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Expected output
//1 byte for chars
//1 byte for char variables
//2 bytes for shorts
//2 bytes for short variables
//4 bytes for ints
//4 bytes for int variables
//4 bytes for longs
//4 bytes for long variables
//8 bytes for long longs
//8 bytes for long long variables
//4 bytes for floats
//4 bytes for float variables
//8 bytes for doubles
//8 bytes for double variables
//4 bytes for pointers
//4 bytes for pointer variables
//4 bytes for address of char variable
//4 bytes for pointer to char variable
//1 byte for value stored by pointer to char variable
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main(void) {
	char v1;
	short v2;
	int v3;
	long v4;
	long long v5;
	float v6;
	double v7;
	int *v8;
	char *pc=&v1;
	printf("This computer enviroment uses:\n");
	printf("%d byte for chars", sizeof(char));
	printf("\n%d byte for char variables", sizeof(v1));
	printf("\n%d bytes for shorts", sizeof(short));
	printf("\n%d bytes for shorts variables", sizeof(v2));
	printf("\n%d bytes for ints", sizeof(int));
	printf("\n%d bytes for int variables", sizeof(v3));
	printf("\n%d bytes for longs", sizeof(long));
	printf("\n%d bytes for longs variables", sizeof(v4));
	printf("\n%d bytes for long longs", sizeof(long long));
	printf("\n%d bytes for long long variables", sizeof(v5));
	printf("\n%d bytes for floats", sizeof(float));
	printf("\n%d bytes for floats variables", sizeof(v6));
	printf("\n%d bytes for doubles", sizeof(double));
	printf("\n%d bytes for doubles variables", sizeof(v7));
	printf("\n%d bytes for pointers", sizeof(	int*));
	printf("\n%d bytes for pointers variables", sizeof(v8));
	printf("\n%d bytes for adress of char variable", sizeof(&v1));
	printf("\n%d bytes for pointer to char variable", sizeof(pc));
	printf("\n%d byte for value stored by pointer to char variable", sizeof(*pc));
	return 0;
}