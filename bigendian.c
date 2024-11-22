
#include <stdio.h>
union {
	int a;
       unsigned	char b;
} test;

int main() {

	test.a = 0xff;
	if (test.b == 0xff)
		printf("little endian");
	else
		printf("big endian");
	return 0;
}
