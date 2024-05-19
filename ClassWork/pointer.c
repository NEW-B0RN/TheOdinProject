#include <stdio.h>

int main() {
    int i = 10, *j, **k;
    j = &i;
    k = &j;

    printf("\naddr of i=%u",&i);
printf("\naddr of i=%u",j);
printf("\naddr of i=%u",*k);
printf("\naddr of j=%u",&j);
printf("\naddr of j=%u",k);
printf("\naddr of k=%u",&k);
printf("\nj=%u",j); printf("\nk=%u",k);
printf("\ni=%d",i); printf("\ni=%d",*(&i));
printf("\ni=%d",*j); printf("\ni=%d",**k);     


}