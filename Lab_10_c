#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int NOD(int a, int b){
    int c;
    while (a != b){
        if (a > b){
            c = abs(a - b);
            a = c;
        }
        else{
            c = abs(b - a);
            b = c;
        }
    }
    return a;
}

int NOK(int a, int b){
    return a*b / NOD(a, b);
}
void Space_del(char *s) {
    if (!s[0] || !s[1]) {
        return;
    }
    if (isspace(s[0]) && isspace(s[1])) {
        for (int i = 0; s[i]; i++) {
            s[i] = s[i + 1];
        }
        Space_del(s);
    }
    if ((s[1] == '.' || s[1] == ',') && isspace(s[0])) {
        for (int i = 0; s[i]; i++) {
            s[i] = s[i + 1];
        }
        Space_del(s);
    }
    else {
        Space_del(s+1);
    }
}
int main(){
    //1
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);
    printf("%d\n", NOD(n, m));
    printf("%d", NOK(n, m));
    //5
    char str[100] = "Hello .  My Pedro   , Welcome   to my  home! ";
    Space_del(str);
    printf("%s", str);
    return 0;
}
