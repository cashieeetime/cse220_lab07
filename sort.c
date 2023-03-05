#include <stdio.h>

int main(void) {
  int values[10], min, cont, starter, sort_idx, idx, new_values[10];
  cont = 0;
  sort_idx = 0;
  starter = 0;
  min = 1000000000;

  printf("Please enter the array of length 10:\n");
  for (idx=0; idx<10; idx++) { 
    scanf("%d", &values[idx]);
  } 

  while (cont = 0) {
    for (idx = starter; idx<11; idx++) {
        if (values[idx] < min) {
            min = values[idx];
        }
    }

    new_values[sort_idx] = min;
    sort_idx++;
    starter++;
    if (starter > 11) {
        cont = 1;
    }
  }
  
  printf("Sort the array in increasing order: ");
  for (idx=0; idx<11; idx++) {
    printf("%d, ", new_values[idx]);
  }
  

  return 0;
}