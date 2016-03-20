#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q[1200];
int s = 0;
int e = 0;

int enqueue(int n);
int dequeue();
int is_empty();
int head();
int tail();

int main(int argc, char const *argv[]) {
	for (;;) {
		int val = 0, len, n;
		int i, j;
		char command[12];
		char c;
		fgets(command, sizeof(command), stdin);
		//printf("command=%s\n", command);
		switch (command[0]) {
			case 'e':
			  	len = strlen(command);
			  	len--;
				//printf("len1=%d\n", len);
				len = len - 8;
				//printf("len2=%d\n", len);
				for (i = 0; i < len; i++) {
					c = command[8+i];
					sscanf(&c, "%d", &n);
					for (j = i+1; j <= len; j++) {
						n = n * 10;
					}
					n = n / 10;
					val = val + n;
				}
				//printf("val=%d\n", val);
				enqueue(val);
				break;
			case 'd':
				dequeue();
				break;
			case 'i':
				is_empty();
				break;
			case 'h':
				head();
				break;
			case 't':
				tail();
				break;
		}
	}

	return 0;
}

int enqueue(int n) {
	q[e] = n;
	e++;
	return 0;
}
int dequeue() {
	if (s == e) {
		printf("empty!\n");
		return 0;
	}
	printf("%d\n", q[s]);
	s++;
	return 0;
}
int is_empty() {
	if (s == e) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}
	return 0;
}
int head() {
	if (s == e) {
		printf("empty!\n");
		return 0;
	}
	printf("%d\n", q[s]);
	return 0;
}
int tail() {
	if (s == e) {
		printf("empty!\n");
		return 0;
	}
	printf("%d\n", q[e-1]);
	return 0;
}