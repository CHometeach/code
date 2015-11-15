#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n, i, j, temp, k;
    while (scanf("%d", &n) != EOF) {
        int inpt[n];
        for (i = 0; i < n; ++i) {
            scanf("%d", &inpt[i]);
        }
        for (i = 0; i < n - 1; ++i) {
            for (j = i + 1; j < n; ++j) {
                printf("i=%d,j=%d\n", i, j);
                if (inpt[i] > inpt[j]) {
                    temp = inpt[i];
                    inpt[i] = inpt[j];
                    inpt[j] = temp;
                    for (k = 0; k < n; ++k) {
                        printf("%d ", inpt[k]);
                    }
                    printf("\n");
                }
            }
        }
        printf("\n");
        printf("answer:");
        for (k = 0; k < n; ++k) {
            printf("%d ", inpt[k]);
        }
        printf("\n");
    }   
    return 0;
}