#include <stdio.h>
#include <stdlib.h>

void show(int *d, int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        printf("%c ", *d++);
        count++;
        if (count > 2) {
            printf("\n");
            count = 0;
        }
    }
}
void main() {
    int n = 4;
    int *arr = calloc(n, sizeof(n));
    if (arr != NULL) {
        int *d;
        d = arr;
        for (int i = 0; i < n; i++) {
            scanf("%c", &*d++);
        }
        show(arr, n);
        free(arr);
    }
}
