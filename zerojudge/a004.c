#include <stdio.h>

int main(int argc, char const *argv[])
{
	int cin, cout;
	while(scanf("%d",&cin) != EOF){
		if (cin % 4 == 0 && cin % 100 != 0 || cin % 400 == 0){
			printf("閏年\n");
		}
		else{
			printf("平年\n");
		}
	}

	return 0;
}