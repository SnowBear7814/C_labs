#include <stdio.h>
#include <stdlib.h>
struct Rhombus{
    int x1;
    int y1;
    int x2;
    int y2;
} rhom;
void area(struct Rhombus*){
    float ar = abs(rhom.x1 - rhom.x2) * abs(rhom.y1 - rhom.y2);
    printf("%f\n", ar);
}
void perimeter(struct Rhombus*){
    float per = 2 * abs(rhom.x1 - rhom.x2) + 2 * abs(rhom.y1 - rhom.y2);
    printf("%f", per);

};
int main(){
    scanf("%d", &rhom.x1);
    scanf("%d", &rhom.x2);
    scanf("%d", &rhom.y1);
    scanf("%d", &rhom.y2);
    struct Rhombus rhom;
    area(&rhom);
    perimeter(&rhom);
    return 0;
}
