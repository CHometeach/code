#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int i, j, flag;
	int count, length;
	int size_int, target_int, num_int[1000];
	char *delim = " ";
  	char * pch;
  	char size[8], target[8];
	fgets(size, sizeof(size), stdin);
	char num[1000];
	size_int = atoi(size);
	for (i = 0; i < size_int; ++i) {
		count = 0;
		flag = 0;
		length = 0;
		fgets(target, sizeof(target), stdin);
		target_int = atoi(target);
		fgets(num, sizeof(num), stdin);
		pch = strtok(num,delim);
		while (pch != NULL) {
    		num_int[count] = atoi(pch);
    		pch = strtok (NULL, delim);
  			count++;
  		}
  		length = count;
  		for (j = 0; j < length; ++j) {
  			if (num_int[j] == target_int) {
  				flag = 1;
  				break;
  			}
  		}
			if (flag == 1) {
			    printf("found\n");
			}
			else {
			    printf("can't find\n");
			}
	}
	return 0;
}