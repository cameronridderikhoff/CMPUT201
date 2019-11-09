#include <stdio.h>

int main()
{
  int first, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check, sum1, sum2, total;
  printf("Enter your the first 11 digits of your UPC code: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
  sum1=first+i2+i4+j1+j3+j5;
  sum2=i1+i3+i5+j2+j4;
  sum1*=3;
  total=sum1+sum2;
  total--;
  check=total%10;
  printf("Check digit should be equal to: %d\n", 9-check);
}
