#include <stdio.h>

int main() {
    int n ;

    printf("Enter the number of elements in  array: ");
    scanf("%d", &n);

    int array[n], temp[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element No. %d: \n", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i= 0; i < n; i++){
        temp[i] = array[n - i - 1];
    }
    
    for( int i = 0; i<n; i++){
    printf("%d \n", temp[i]);
    }

}