#include <stdio.h>

int main(void) {
  int values[10], idx, starter_idx, end_idx, i, min;
  min = 1000000;
  printf("Please enter the starter_index:\n");
  scanf("%d", &starter_idx);
  printf("Please enter the end_index:\n");
  scanf("%d", &end_idx);
  printf("Please enter the array of length 10:\n");
  for (idx=0; idx<10; idx++) { 
    scanf("%d", &values[idx]);
  } for (idx = starter_idx; idx<= end_idx; idx++) {
    if (values[idx] < min) {
      min = values[idx];
      i = idx; 
    }}
  printf("The smallest element = %d \n", min);
  printf("The index of the smallest element = %d", i);
  return 0;
}