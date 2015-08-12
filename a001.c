#include<stdio.h>

int main() {
 
	char s[9999];
	while(scanf("%s",s)!=EOF) {
 		printf("hello, %s\n",s);
 	}
	return 0;
}