# include <stdio.h>

int main(){
    int n,m;

    int flag = 0;
    printf("Size of array: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Size of Second array: \n");
    scanf("%d", &m);
    int ar2[m];
    for(int i=0; i<m; i++){
        scanf("%d", &ar2[i]);
    }
    printf("Union is \n");
    for(int i=0; i<n; i++){
        printf("%d \n",  arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i] == ar2[j]){
                flag = 1;
            }
                if(flag== 0){
                     printf("%d \n", ar2[j]);}
                 flag = 0;
        }
    }
    
}