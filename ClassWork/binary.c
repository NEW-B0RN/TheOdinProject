#include <stdio.h>

int main() {
   int arr[]= {1,2,3,4,5,6,6,7,7,88}, t=7;

    int l=0, h=9, m;
    while (l<=h){
        m = (l+h)/2;
        if (arr[m]== t)
        {printf("Found at index %d", m);
        break;}
        
        if (arr[m]<t)
        {l = m+1;}
        else 
        {h = m-1;}

    }

}