#include <stdio.h>

int main() {
    int num_int; //целое
    float num_float; //вещественное
    char symbol; //символ
    printf("Input int num, float num and symbol:\n");
    scanf("%d", &num_int);
    scanf("%f", &num_float);
    scanf("%s",&symbol);
    printf("Int num:%d\nfloat num:%.2f\nsymbol:%c\n", num_int, num_float, symbol);
    return 0;
}
