#include <stdio.h>

int count_stack = 0;
char can[20];
char empty;

void push(char inpt);
char pop();

int main(int argc, char const *argv[])
{
	char inpt[6];
	int i, count = 0, outpt[10];
	while (scanf("%s", inpt) != EOF) {
		printf("[%s]\n", inpt);
		if (inpt[1] == 'u' && inpt[2] == 's') {
			push(inpt[5]);
			printf("push\n");
		}
		else if (inpt[0] == 'e') {
			break;

		}
		else {
			outpt[count] = pop();
			count++;
		}
	}
	for (i = 0; i < count; i++) {
		printf("%c ", outpt[i]);
	}
	printf("\n");
	for (i = 0; i < count_stack; i++) {
		printf("%c ", can[i]);
	}
	printf("\n");
	return 0;
}

void push(char inpt) {
	can[count_stack] = inpt;
	count_stack++;
	printf("%d\n", count_stack);
}

char pop() {
	printf("pop function\n");
	if (count_stack == 0) {
		printf("null\n");
		return empty;
	}
	count_stack--;
	return can[count_stack];
}