#include <stdio.h>

int main() {
    int n, m;
    bool flag = false;

    printf("Enter the number of elements in the first array: \n");
    scanf("%d", &n);
    int arr1[n];

    for (int i = 0; i < n; i++) {
        scanf("Element no.%d\n", &arr1[i]);
    }

    printf("Enter the elements of the second array: \n");
    scanf("%d", &m);

    int arr2[m];

    for (int i = 0; i < m; i++) {
        scanf("Element no.%d\n", &arr2[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr1[i] == arr2[j]){
                flag = true;
;
            }

            if(flag == true){
                printf("The common element is %d\n", arr1[i]);
            }
        }
    }
}