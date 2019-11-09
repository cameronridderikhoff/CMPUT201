#include <stdio.h>

float polynomial(float x)
{
  return ((((3*x+2)*x-5)*x-1)*x+7)*x - 6;
}

int main()
{
  float x = 0.0f;
  printf("Please input 'x': ");
  scanf("%f", &x);
  x=polynomial(x);
  printf("The value of the polynomial is :%f", x);
}
