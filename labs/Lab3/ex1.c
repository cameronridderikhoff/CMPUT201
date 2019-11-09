#include <stdio.h>

int main()
{
  int r1c1, r1c2, r1c3, r1c4, r2c1, r2c2, r2c3, r2c4, r3c1, r3c2,r3c3, r3c4, r4c1, r4c2, r4c3, r4c4;
  printf("Enter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r1c1, &r1c2, &r1c3, &r1c4, &r2c1, &r2c2, &r2c3, &r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1, &r4c2, &r4c3, &r4c4);

  printf("\n");
  printf("%d %d %d %d\n", r1c1, r1c2, r1c3, r1c4);
  printf("%d %d %d %d\n", r2c1, r2c2, r2c3, r2c4);
  printf("%d %d %d %d\n", r3c1, r3c2, r3c3, r3c4);
  printf("%d %d %d %d\n", r4c1, r4c2, r4c3, r4c4);
  printf("\n");
  
  printf("Row sums: %d %d %d %d\n", r1c1+r1c2+r1c3+r1c4,  r2c1+r2c2+r2c3+r2c4, r3c1+r3c2+r3c3+r3c4, r4c1+r4c2+r4c3+r4c4);
  printf("Column sums: %d %d %d %d\n", r1c1+r2c1+r3c1+r4c1, r2c1+r2c2+r2c3+r2c4, r3c1+r3c2+r3c3+r3c4, r4c1+r4c2+r4c3+r4c4);
  printf("Diagonal sums: %d %d\n", r1c1+r2c2+r3c3+r4c4, r1c4+r2c3+r3c2+r4c1);

  return 0;
}
