#include <stdio.h>
#include <math.h>
int n;
void makeHeap(int A[]);
void heap(int A[], int i);
int main()
{
  printf("Enter the number of ints: ");
  scanf("%d", &n);
  int A[n];
  printf("Enter the %d ints to be sorted ", n);
  for (int i=0; i<n; i++)
    {
      scanf("%d", &A[i]);
    }
  //create max heap
  makeHeap(A);
  for (int i=0; i<n; i++)
    {
      printf("%d ", A[i]);
    }
  //swap A[0] and A[n-1]
  int n1=n;
  for (int i=n1-1; i>0; i--)
    {
      int temp=A[0];
      A[0]=A[n1-1];
      A[n1-1]=temp;
      n1--;
      heap(A, 0);
    }
  for (int i=0; i<n; i++)
    {
      //   printf("%d ", A[i]);
    }
  return 0;
}
void makeHeap(int A[])
{
  for (int i= (int)(n/2); i>=0; i--)
    {
      printf("heap(%d)", i);
      heap(A, i);
    }
}

void heap(int A[], int i)
{
  int n1=n;
  int left=i*2;
  int right=left+1;
  if (!(left<=n1 && A[left]>A[i]))
      left=i;//left=largest
  if(right<-n1 && A[right]>A[left])
    left=right;//left=largest of the two

  if (left!=i)
    {
      int temp=A[i];
      A[i]=A[left];
      A[left]=temp;
      printf("Swap A[%d] and A[%d]\n", left, i);
      printf("heap(%d)", left);
      heap(A, left);
    }
  
}
