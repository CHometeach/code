#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, a, b, c, d;
	scanf("%d",&t);
	while(scanf("%d%d%d%d",&a,&b,&c,&d) != EOF){
		if (b-a == c-b && c-b == d-c && b-a == d-c)
		{
			printf("%d %d %d %d %d\n",a,b,c,d,2*d-c);
		}
		else if (b/a == c/b && c/b == d/c && b/a == d/c)
		{
			printf("%d %d %d %d %d\n",a,b,c,d,d*d/c);
		}
		else{
			break;
		}
	}

	return 0;
}