#include <stdio.h>

int main() {
  int ar1[] = {1, 2, 3, 4, 4, 4, 8, 8, 9}, ar2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18},temp;

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (ar1[i] == ar1[j]) {
          for (int k = j - 1; i < 9 - 1; i++)
    {
        ar1[j] = ar1[j + 1];
    }
        
      }
    }
  }

  for (int i = 0; i < 9; i++) {
    printf("%d ", ar1[i]);
  }
}