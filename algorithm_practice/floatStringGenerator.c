#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int i;
	for (i = 0; i < 10000; ++i) {
		printf("%d.%d\n", rand() % 100 + 1, rand() % 100000 + 1);
	}
	return 0;
}