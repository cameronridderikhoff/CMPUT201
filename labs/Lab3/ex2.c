#include <stdio.h>

int main()
{
  int num;
  printf("Enter a 3-digit number: ");
  scanf("%3d", &num);
  int first, second, third; //digits
  third=num%10;
  num=num/10;
  second=num%10;
  num=num/10;
  first=num%10;
  printf("The reversal is: %d%d%d\n", third, second, first);
}
