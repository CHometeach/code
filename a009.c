#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int k = -7, i;
    char inpt[100];
    while (scanf("%s", inpt) != EOF) {
        for (i = 0; i < strlen(inpt); i++) {
        	printf("%c", inpt[i]+k);
        }
        printf("\n");
    }
    return 0;
}
