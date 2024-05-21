#include <stdio.h>

int main() {
    FILE *p1,*p2;
    p1 = fopen("ruel.txt","w");

    char ch;

    while(1){
        ch = fgetc(p1);
        if(ch == EOF) {
            break;
        }
        printf("%c",ch);
    }

    fprintf(p1,"%s","Hello World\n");

    if(p1 == NULL) {
        printf("File not found\n");
        return 1;
    }

    fclose(p1);
}