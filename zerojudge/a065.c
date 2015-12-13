#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	char password_a[7];
	int i, password_i[6], temp[7];
	while(scanf("%s", password_a) != EOF) {
		for (i = 0; i < 7; ++i) {
			temp[i] = password_a[i];
		}
		for (i = 0; i < 7; ++i) {
			printf("temp[%d] = %d\n", i, temp[i]);
		}
		for (i = 0; i < 7; ++i) {
			if (i+1 == 7) {
				break;
			}
			password_i[i] = temp[i+1] - temp[i];
			printf("%d - %d = password_i[%d]\n", temp[i+1], temp[i], i);
		}
		for (i = 0; i < 7; ++i) {
			printf("%d", abs(password_i[i]));
		}
		printf("\n");
	}
	return 0;
}