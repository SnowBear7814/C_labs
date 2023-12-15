#include <stdio.h>
#include <time.h>
int main() {
    //1
    time_t t = time(NULL);
    struct tm* current_time = localtime(&t);
    FILE*output = fopen("Best_time.txt", "w");
    for (int i = 0; i<10; i++) {
        fprintf(output, "%02d-%02d-%04d \n",
                current_time->tm_mday + i,
                current_time->tm_mon + 1,
                current_time->tm_year + 1900);
    }
    fclose(output);
    return 0;
}
