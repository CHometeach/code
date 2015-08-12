#include <stdio.h>

int main(int argc, char const *argv[])
{
	int M, D, S;
	while(scanf("%d %d",&M,&D) != EOF) {
		S = (M * 2 + D) % 3;
		if (S == 0) {
			printf("普通\n");			
		}
		else if (S == 1) {
			printf("吉\n");
		}
		else {
			printf("大吉\n");
		}
	}
	return 0;
}