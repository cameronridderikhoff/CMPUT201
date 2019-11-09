#include <stdio.h>

int main()
{
  int a, b; //numbers
  printf("Enter two ints: ");
  if(scanf("%d/%d", &a, &b)==2)
    {
      int i=0;
      int ta=a;
      int tb=b;
      if (ta<tb)
	{//makes a the larger int if it isn't already
	  int temp=ta;
	  ta=tb;
	  tb=temp;
	}
      while (tb!=0)
	{
	  i=ta%tb;
	  ta=tb;
	  tb=i;
	}
      //ta now contains the GCD
      a/=ta;
      b/=ta;
      if (b==1)
	{//the fraction can be reduced to x/1 which equals x
	  printf("In lowest terms: %d\n", a);
	}
      else
	{
	  printf("In lowest terms: %d/%d\n", a,b);
	}
    }
  else
    {
      printf("Incorrect input.\n");
      return-1;
    }
}
