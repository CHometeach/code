#include <stdio.h>
#include <string.h>

int digit = 0, a = 0;
float num = 0.0;
int DecimalPointFound = 0;

void init ();

int main(int argc, char const *argv[]) {
	char str[10];
	int i;
	float sum;
	while (scanf("%s", str) != EOF) {
		for (i = 0; i < strlen(str) ; ++i) {
			if (DecimalPointFound == 1) {
				digit++;
			}
			if (str[i] == '.') {
				DecimalPointFound = 1;
			}
			else {
				num = num + (str[i] - '0');
				num = num * 10;
			}
		}
		num = num * 0.1;
		for (i = 0; i < digit; ++i) {
			num = num * 0.1;
		}
		sum = sum + num;
		init();
	}
	printf("%f\n", sum);
	return 0;
}

void init () {
	digit = 0;
	a = 0;
	num = 0.0;
	DecimalPointFound = 0;
}