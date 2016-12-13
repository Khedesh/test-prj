#include <stdio.h>

int a = 0;

int main() {
	int b = 100;
	printf("b = %d\n", b);
	printf("a: %d\n", a);

	int c = a + b;

	printf("%d\n", c);
	return 0;
}
