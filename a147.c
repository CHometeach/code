#include <stdio.h>

int main (int argc, char const *argv[]) {
	int n, checked, i, s = 0;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		int outptArray[n];
		for (i = 1; i < n; ++i) {
			if (i % 7 != 0) {
				outptArray[s] = i;
				s++;
			}
		}
		for (i = 0; i < s; ++i) {
			printf("%d ", outptArray[i]);
		}
		printf("\n");
		s = 0;
	}
	return 0;
}
