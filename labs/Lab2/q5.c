#include <stdio.h>

float polynomial(float x)
{
  float t1; //first term
  float t2; //second
  float t3; //third
  float t4; //fourth
  float t5; //fifth
  int t6 = 6; //last

  t1=3*(x*x*x*x*x);
  t2=2*(x*x*x*x);
  t3=5*(x*x*x);
  t4=x*x;
  t5=7*x;

  return t1+t2-t3-t4+t5-t6;
}

int main()
{
  float x = 0.0f;
  printf("Please input 'x': ");
  scanf("%f", &x);
  x=polynomial(x);
  printf("The value of the polynomial is :%f", x);
}
