#include <stdio.h>

int a = 0;

int main() {
	printf("a: %d\n", a ^ 2);
	int b = 100;
	printf("b = %d\n", b);
	printf("a: %d\n", a);
	int c = a + b;
	printf("%d\n", c);
	printf("a: %d\n", a);
	return 0;
}
