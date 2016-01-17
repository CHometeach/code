#include <stdio.h>
#include <string.h>
#include <math.h>

int atoi(char n);

int main(int argc, char const *argv[]) {
	int num;
	int i;
	char num_str[10];
	while(scanf("%s", num_str) != EOF) {
		for (i = 0; i < strlen(num_str); ++i) {
			if (i != 0) {
				num = num + atoi(num_str[i]) * pow(10, i) ;
			}
			else {
				num = num + atoi(num_str[i]);
			}
		}
		printf("%d\n", num);
		num = 0;
	}
	return 0;
}

int atoi(char n) {
	int num;
	num = n - '0';
	return num;
}