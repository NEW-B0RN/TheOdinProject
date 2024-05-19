#include <stdio.h>

int main(){
    int ar[100], position, i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter element %d: \n", i+1);
        scanf("%d", &ar[i]);
    }

    printf("before \n");
    for(i=0; i<n; i++){
        printf("%d \n", ar[i]);
    }

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);

    for (i = position - 1; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }
    
    printf("after \n");
    for(i=0; i<n-1; i++){
        printf("%d \n", ar[i]);
    }
}