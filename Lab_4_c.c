#include <stdio.h>

int main() {
    int x = -4, y = -1, a, num, x1, y1;
    scanf("%d", &a);
    x1 = a - x;
    y1 = y - a;
    printf("0 means in range: \n%d\n", !!!(x1 & y1));

    scanf("%o", &num);
    if ((num & (1 << (15 - 1))) > 0){
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
