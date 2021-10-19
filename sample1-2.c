// sample 1-2
#include <stdio.h>
int main(){
    int i = 10;
    float j = 10.5;
    char k = 'b';

    i = i / 3;
    j = j / 5;
    k = k += 2;
    printf("i = %f \n", i);
    printf("j = %f \n", j);
    printf("k = %c \n", k);
}