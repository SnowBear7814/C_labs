#include <stdio.h>
#include <math.h>

long int fact(int num){
    long int result;
    for(int i = 1; i < num; i++)
        result += result*i;
    return result;
}

float degree(float x, int degree){
    float result = 1;
    for(int i=0; i < degree; i++)
        result *= x;
    return result;
}

float sinus(float x){
    float pi = 3.14159265359;
    float result_sinus = x;
    x = fmod(pi/180 * x, pi * 2);
    for(int i = 3; i < 10; i+=2)
        result_sinus += degree(x, i) / fact(i);
    return result_sinus;
}

int main() {
    //вариант 15
    float b, z1, z2, a, res_sin;
    printf("Input b:\n");
    scanf("%f", &b);
    z1 = (sqrtf(2 * b + 2 * sqrtf(b*b - 4))) / (sqrtf(b*b - 4) + b + 2);
    z2 = 1 / (sqrtf(b + 2));
    if (isnan(z1) == 0)
        printf("z1 = %.2f\n", z1);
    else
        printf("Wrong domain b in z1\n");
    if (isnan(z2) == 0)
        printf("z2 = %.2f\n", z2);
    else
        printf("Wrong domain b in z2\n");
    printf("Input alpha:\n");
    scanf("%f", &a);
    res_sin = sinus(a);
    printf("%f", &res_sin);

    return 0;

}
