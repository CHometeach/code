#include <stdio.h>
#include <stdlib.h>

int binarysearch(int[], int, int);
void split(char **arr, char *str, const char *del);

int main(void) {
    int search, ans;
    int line_number, i;
    scanf("%d", &line_number);
    for (i = 0; i < line_number; ++i) {
        scanf("%d", &search);
    }
    scanf("%d", &search);
    ans = binarysearch(data, search, sizeof(data) / sizeof(int));
    if (ans < 0) {
        printf("Not found %d\n", search);
    }
    else {
        printf("Find %d %d\n", ans, search);
    }
}

int binarysearch(int data[], int search, int n) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (data[mid] == search) {
            return mid;
        }
        else if (data[mid] > search) {
            high = mid - 1;
        }
        else if (data[mid] < search) {
            low = mid + 1;
        }
    }
    return -1;
}

void split(char **arr, char *str, const char *del) {
    char *s = strtok(str, del);

    while(s != NULL) {
        *arr++ = s;
        s = strtok(NULL, del);
    }
}