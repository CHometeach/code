#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	int team, sum = 0, num1, num2, i, j, temp;
	scanf("%d", &team);
	for (j = 1; j <= team; j++) {
		scanf("%d", &num1);
		scanf("%d", &num2);
		for(i = 1; i <= num2; i++) {
			temp = pow(i, 2);
			if (temp >= num1 && temp <= num2) {				
				sum += temp;
			}
		}
		printf("Case %d: %d\n", j, sum);
		sum = 0;
	}	
	return 0;
}