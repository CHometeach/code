#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	int amount, i, ans = 1, j;
	char num_a[10];
	scanf("%d", &amount);
	for (i = 0; i < amount; ++i){
		scanf("%s", num_a);
		for (j = 0; j < strlen(num_a); ++j) {
			ans = ans * (num_a[j] - '0');
		}
		printf("%d\n", ans);
		ans = 1;
	}
	return 0;
}