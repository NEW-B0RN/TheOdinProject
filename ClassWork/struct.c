#include <stdio.h>

int main () {
    struct student{
        char name[50];
        int roll;
        float marks;
    };
    struct student s[3];
    for (int i = 0; i < 3; i++){
        printf("Enter info about student %d\n", i+1);
        scanf("%s %d %f", &s[i].name, &s[i].roll, &s[i].marks);
    }
    
    printf("Displaying information of students\n");
    for (int i = 0; i < 3; i++){
        printf("Name: %s\n Roll: %d\n Marks: %f\n", s[i].name, s[i].roll, s[i].marks);
    }

    struct student s1 = {"John", 1, 99.9} s2= s1, s3;
    strcpy(s3.name, s2.name);
}