#include <stdio.h>

int main(int argc, char const *argv[])
{
	int t, i = 0, j = 0;
	int loop = 4;
	int x[loop];
	scanf("%d",&t);
	if(t >= 0 && t <= 20){
		for(j = 0 ; j < t ; j++){
			for (i = 0; i < loop; i++)
			{
				scanf("%d",&x[i]);
			}
			i = 0;
			if (x[i+1] - x[i] == x[i+3] - x[i+2])
			{
				printf("%d %d %d %d %d\n",x[i],x[i+1],x[i+2],x[i+3],2*(x[i+3])-(x[i+2]));
			}
			else if (x[i+1] / x[i] == x[i+3] / x[i+2])
			{
				printf("%d %d %d %d %d\n",x[i],x[i+1],x[i+2],x[i+3],(x[i+3])*(x[i+3])/(x[i+2]));
			}
			else{
				break;
			}
		}
	}
	else{
		return 0;
	}

	return 0;
}