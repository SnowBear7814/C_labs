#include <stdio.h>

int main() {
    int num_int;
    float num_float;
    char symbol;
    printf("Input int num, float num and symbol:\n");
    scanf("%d", &num_int);
    scanf("%f", &num_float);
    scanf("%s",&symbol);
    printf("Int num:%d\nfloat num:%.2f\nsymbol:%c\n", num_int, num_float, symbol);
    return 0;
}