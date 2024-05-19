#include <stdio.h>
#include <math.h>

int main() {
    float x[1000];
    int i,n;
    float average,sum=0,std_deviation,sum1=0 , variance;
    printf("Enter number of elements \n");
    scanf("%d", &n);
    for (i = 0; i<n ; i++){
        printf("Enter %d element \n", i+1);
        scanf("%f", &x[i]);
    }

    for (i = 0; i<n ; i++){
        sum = sum + x[i];
}

    average = sum/(float)n;

   printf("Average of all elements = %.2f\n",  average);

   for (i = 0; i<n ; i++){
        sum1 = sum1 + pow((x[i] - average),2);
   }

   variance = sum1/(float)n;
   std_deviation = sqrt(variance);

    printf("Standard Deviation = %.2f\n", std_deviation);
    printf("Variance = %.2f\n", variance);
    return 0;

}