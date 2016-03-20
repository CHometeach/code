#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int i;
	for (i = 1; i < 200001; ++i) {
		printf("%d %d %d\n", i, rand() % 1000000 + 1, rand() % 1000000 + 1);
	}
	return 0;
}