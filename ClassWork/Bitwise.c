#include <stdio.h>

int main(){
    int i=5, j=7, c;

    c = i&j;
    printf("1 %d\n",c);

    c = i|j;
    printf("2 %d\n",c);

    c = i^j;
    printf("3 %d\n",c);

    c = ~i;
    printf("4 %d\n",c);

    i = 1;
    printf("5 %d %d\n", i<<=3, i>>=2);

    c = i<<2;
    printf("6 %d\n",c);

    c = i>>2;
    printf("7 %d\n",c);

    return 0;
}