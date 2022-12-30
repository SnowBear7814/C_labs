#include <stdio.h>
#include <stdlib.h>
enum Music{
    ROCK,
    POP,
    CLASSIC,
    RAP,
    ELECTRONICS
};
struct triangle {
    double per_t;
    float length_a;
    float length_b;
    float length_c;
};

float Per(struct triangle tr)
{
    return tr.length_a + tr.length_b + tr.length_c;
};


int main() {
    printf("%s", ROCK);
    enum Music a ;
    a = ROCK;
    printf("%d\n" , a);

    //2

    struct triangle Alfa;
    Alfa.length_a = 20;
    Alfa.length_b = 12;
    Alfa.length_c = 16;
    float per = Per(Alfa);

    printf("%f\n" , per);

    //3

    union {
        int x;
        struct {
            int SD : 1;
            int CompactFlash : 1;
            int MemoyStick : 1;
        };
    } condition;

    scanf("%X", &condition.x);

    condition.SD ? printf("активна карта SD\n") : printf("не активна карта SD\n");
    condition.CompactFlash ? printf("активна карта Compact Flash\n") : printf("не активна карта Compact Flash\n");
    condition.MemoyStick ? printf("активна карта MemoyStick\n") : printf("не активна карта Compact Flash\n");

    return 0;
}
