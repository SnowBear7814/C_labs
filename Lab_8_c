#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int strlength(const char *myStr){
    int strlength = 0;
    while (myStr[strlength] != '\0'){
        putchar(myStr[strlength]);
        strlength++;
    }

    return strlength;
}

int main(){
    char *string1 = malloc(10 * sizeof(char));
    char *string01 = malloc(10 * sizeof(char));
    strcpy(string1, "Weclome");
    strcpy(string01, "Welcome");
    char *string2 = " Home";
    int num_chars = 3;

    //2
    int  i;
    int len1;
    len1 = sizeof string1;
    for (i = 0; i < num_chars; i++) {
        string01[len1 + i] = string2[i];
    }
    printf("%s\n", string01);
    printf("\n");

    // 7

    printf("%d \n" , strlength(string1));


    // 11
    char *p;
    int count = 0;
        for ( p = string1; *p; ++p )
            if (strchr(string2, *p) ){
                count ++;
            }
            printf("%d\n", count);

    //12
    printf("%ld\n",strcspn(string1, string2));
    return 0;

}
