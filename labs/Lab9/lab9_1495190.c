#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#define DEBUG
int main()
{
  int black, white, maxIt;
  bool b1Black, b2Black;
  printf("Enter the number of black and white beans: ");
  scanf("%d%d", &black, &white);
  maxIt=10000*(black+white);
  int i;
  for (i=0; i<maxIt; i++)
    {
      int r1=rand()%1000;
      int r2=rand()%1000;
      if (r1>=500)
	b1Black=true;
      else
	b1Black=false;
      if (r2>=500)
	b2Black=true;
      else
	b2Black=false;

      if ((black>0 && white>0) && !(white>1) && !(black>1))
	{//one of each left, must pick them both
	  b1Black=true;
	  b2Black=false;
	}
      if(!(black>0 && white>0) && (white>1) && !(black>1))
	{//two white left
	  b1Black=false;
	  b2Black=false;
	}
      if (!(black>0 && white>0) && !(white>1) && (black>1))
	{//two black left
	  b1Black=true;
	  b2Black=true;
	}


      while (!(white>1) && !b1Black && !b2Black)
	{//if there is only one white bean, we can't pick only white beans
	  int r1=rand()%1000;
	  int r2=rand()%1000;
	  if (r1>=500)
	    b1Black=true;
	  else
	    b1Black=false;
	  if (r2>=500)
	    b2Black=true;
	  else
	    b2Black=false;
	}
      while (!(black>1) && b1Black && b2Black)
	{//if there is only one black bean, we can't pick only black beans
	  int r1=rand()%1000;
	  int r2=rand()%1000;
	  if (r1>=500)
	    b1Black=true;
	  else
	    b1Black=false;
	  if (r2>=500)
	    b2Black=true;
	  else
	    b2Black=false;
	}
      if (b1Black==b2Black)
	{//if they are the same color, throw them out
	  if (b1Black)
	      black-=2;
	  else
	    white-=2;
	  black++;//add one black bean
	  i++;
	}
      else//if they are different colors put white one back, throw away black
	  black--;

      if (!(black>0 && white>0) && !(white>1) && !(black>1))//we need at least one black bean and one white, or 2 white, or 2 black 
	break; // if we can't continue the game, break out
#ifdef DEBUG
      printf("black:%d, white:%d\n", black, white);
#endif
    }
  
  if (i==maxIt && i!=0)
    printf("Forced termination after %d iterations.\n", maxIt);
  else if (black==1)
    printf("At termination, one black bean is left in the can.\n");
  else if (white==1)
    printf("At termination, one white bean is left in the can.\n");
  else if (black==0 && white==0)
    printf("At termination, there is no bean left in the can.\n");
#ifdef DEBUG
  printf("white:%d, black:%d\n", white, black);
#endif
  return 0;
}
