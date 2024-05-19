#include <stdio.h>

int main() {
    int n,f,flag=0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find: ");
    scanf("%d", &f);

    for(int i = 0; i < n; i++) {
        if(arr[i] == f) {
            printf("Element found at index %d\n", i);
            flag = 1;
            return 0;
        }
    }

    if(flag == 0) {
        printf("Element not found\n");
    }

}