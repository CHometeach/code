#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, x, a = 0, b = 0, c = 0; //a = 3k, b = 3k+1 c = 3k+2
	scanf("%d", &n);
	while (scanf("%d", &x) != EOF) {
		if (x % 3 == 0) {
			a++;
		}
		else if ((x - 1) % 3 == 0) {
			b++;
		}
		else if ((x - 2) % 3 == 0) {
			c++;
		}
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}