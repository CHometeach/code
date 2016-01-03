#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	int start, end, mid;
	int i, flag;
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
		mid = 0;
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
  		start = 0;
  		end = length - 1;
  		while (start <= end) {
		    mid = (start + end) / 2;
		    if (num_int[mid] == target_int) {
		        flag = 1;
		        break;
		    }
		    else if (num_int[mid] > target_int) {
		        end = mid - 1;
		    }
		    else if (num_int[mid] < target_int) {
		        start = mid + 1;
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