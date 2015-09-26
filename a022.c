#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char x[40];
	int n, i, flag = 0;
	while (scanf("%s", x) != EOF ) {
		n = strlen(x);
		flag = 0;
		if (n % 2 == 0 && flag == 0) {
			for (i = 1; i <= (n / 2); i++) {
				if (x[i-1] != x[n-i]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
		else if (n % 2 == 1 && flag == 0) {
			for (i = 1; i <= ((n + 1) / 2); i++) {
				if (x[i-1] != x[n-i]) {
					flag = 1;
					break;
				} 
			}
			if (flag == 0) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
		else if (n == 0 && flag == 0) {
			break;
		}
	}
	return 0;
}