#include <stdio.h>
#include <math.h>
#include <string.h>

int atoi(char *s);

int main(int argc, char const *argv[]) {
	int start, end;
	while(scanf("%d %d", &start, &end) != EOF) {
		int i, j;
		int a = 0;
		int answer[20];
		int flag = 0;
		for (i = start; i <= end; ++i) {
			char num[8];
			char c;
			int sum = 0;
			printf("i = %d\n", i);
			sprintf(num, "%d", i);
			printf("sum = %d\n", sum);
			for (j = 0; j < strlen(num); ++j) {
				c = num[j]; 
				sum = sum + pow(atoi(&c), strlen(num));
				printf("numj = %d\n", atoi(&c));
			}
			printf("%d => %d\n", i, sum);
			if (sum == i) {
				flag = 1;
				answer[a] = i;			
			}
			a++;
		}
		a--;
		if (flag == 1) {
			for (i = 0; i < a; ++i) {
				printf("%d ", answer[i]);
			}
			printf("\n");
		}
		else {
			printf("none\n");
		}	
	}	
	return 0;
}

int atoi(char *s) {
	int sum = 0;
	int i;
	for(i = 0; s[i] != '\0'; i++) {
		sum = sum * 10 + s[i] - '0';
	} 
	return sum; 
}