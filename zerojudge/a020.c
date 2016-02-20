#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *letter_array = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int number_array[] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

int main() {
	char id[10];
	while(scanf("%s", id) != EOF){
		int sum = 0;
		int id_i;
		int i, n, a = 8;
		int letter_i[2];
		for (i = 0; i < strlen(letter_array); i++) {
			if (id[0] == letter_array[i]) {
				n = number_array[i];
			}
		}
		n = (((n % 10) * 9) + (n - (n % 10)) / 10);
		for (i = 1; i <= 8; i++) {
			char letter;
			printf("a = %d\n", a);
			letter = id[i];
			sscanf(&letter, "%d", &id_i);
			sum = sum + id_i * a;
			printf("id = %d\nid * a = %d\nsum = %d\n", id_i, id_i * a, sum);
			a--;
			id_i = 0;
		}
		sscanf(&id[9], "%d", &id_i);
		sum += id_i + n;
		if (sum % 10 == 0) {
			printf("real\n");
		}
		else {
			printf("fake\n");
		}
	}
}