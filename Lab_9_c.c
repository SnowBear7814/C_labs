#include <stdio.h>

void Bank(int sum, int interest_rate, int months) {
    for (int i = 0; i < months; i++) {
        sum *= 1 + (interest_rate * 0.01);
    }
    printf("%d", sum);
}
int main() {
    //1
    char s1[20];
    gets(s1);
    int numbs = 0;
    int cap_let = 0;
    int lowcase_let = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= '1' && s1[i] <= '9') {
            numbs += 1;
        } else if (s1[i] >= 'a' && s1[i] <= 'z') {
            lowcase_let += 1;
        } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
            cap_let += 1;
        }
    }
    //5
    Bank(800, 4, 15);
}
