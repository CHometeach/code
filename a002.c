#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a, b, sum;
	while(scanf("%d %d",&a, &b) != EOF ){
		sum = a + b;
		printf("%d\n",sum);
	}
	return 0;
}