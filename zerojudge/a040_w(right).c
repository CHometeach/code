#include <stdio.h>
#include <math.h>
#include <string.h>

int main(int argc, char const *argv[]) {
	int start, end;
	while(scanf("%d %d", &start, &end) != EOF) {
		int i, j;
		int a = 0;
		long long int answer[20] = {0};
		int flag = 0;
		for (i = start; i <= end; ++i) {
			char num[8];
			// char c;
			long long int sum = 0;
			// printf("i = %d\n", i);
			sprintf(num, "%d", i);
			// printf("%s\n", num);
			// printf("sum = %d\n", sum);
			int power = strlen(num);
			// printf("strlen(num) is %d\n", power);
			for (j = 0; j < power; ++j) {
				char c = num[j];
				int number;
				sscanf(&c, "%d", &number);
				// printf("%c\n", c);
				sum = sum + pow(number, power);
				// printf("numj = %d\n", number);
			}
			// printf("%d => %lld\n", i, sum);
			if (sum == i) {
				flag = 1;
				answer[a] = i;	
				a++;
			}
		}
		// a--;
		if (flag == 1) {
			for (i = 0; i < a; ++i) {
				printf("%lld ", answer[i]);
			}
			printf("\n");
		}
		else {
			printf("none\n");
		}	
	}	
	return 0;
}