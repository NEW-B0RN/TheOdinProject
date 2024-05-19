#include <stdio.h>\

int main() {
    int ar1[100], ar2[100], ar3[300], n1, n2, n3;
    printf("Enter the number of elements in the first array: ");
    scanf("%d\n", &n1);

    for (int i = 0; i < n1; i++) {
        printf("Enter element No. %d: \n", i + 1);
        scanf("%d", &ar1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d\n", &n2);

    for (int i = 0; i < n2; i++) {
        printf("Enter element No. %d: \n", i + 1);
        scanf("%d", &ar2[i]);
    }

    n3 = n1 + n2;

    for (int i = 0; i<n1; i++){
        ar3[i] = ar1[i];
    }

    for (int i = 0; i<n2; i++){
        ar3[n1 + i] = ar2[i];
    }

    printf("The merged array is: \n");
    for (int i = 0; i<n3; i++){
        printf("%d \n", ar3[i]);
    }

}