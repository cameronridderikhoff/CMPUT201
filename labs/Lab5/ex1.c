#include <stdio.h>
#include <math.h>
//magic square
void create_mag_sq(int n, int array[n][n]);
void print_mag_sq(int n, int array[n][n]);
int main()
{
  int n;
  printf("This program creates a magic square of a specified size between 1 and 99.\nEnter size: ");
  scanf("%d", &n);
  if (n>99 || n<1)
    {
      printf("Incorrect input. Try again.\n");
      return -1;
    }
  int a[n][n];
  //initaialze to all 0s
  for (int i=0; i<n; i++)
    {
      for (int j=0; j<n; j++){a[i][j]=0;}
    }
  create_mag_sq(n, a);
  print_mag_sq(n, a);
 
  return 0;
}

void create_mag_sq(int n, int array[n][n])
{
  int i=n/2;
  if (n%2==1)//n is odd
    array[i][0]=1;
  else
    array[--i][0]=1;

    
  int n2=n*n;
  int j=0;
  int in, jn;
  for (int k=2; k<=n2; k++)
    {
      in=(i+1)%n;
      jn=(j-1+n)%n;
      if(array[in][jn]!=0)
	{//already occupied
	  array[i][(j+1)%n]=k;//go below old value
	  j=j+1;
	}
      else
	{
	  array[in][jn]=k;
	  i=in;
	  j=jn;
	}
    }
}

void print_mag_sq(int n, int array[n][n])
{
  for (int i=0; i<n; i++)
    {
      for (int j=0; j<n; j++){printf("%d ", array[j][i]);}
      printf("\n");
    }
  return;
}
