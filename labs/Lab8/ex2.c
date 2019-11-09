#include <stdio.h>
#define N 10
//15 11 23  4 -7 2 -88 1 9 12
void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) {
  int a[N];
  int i;
  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  int *low=&a[0];
  int *high=&a[N-1];
  quicksort(a, low,high);
  printf("In sorted non-decreasing order:");
  
  for (i = 0; i < N; i++)
    printf(" %d", a[i]);
  
  printf("\n");
  return 0;
}

void quicksort(int a[], int *low, int *high)
{
  int *middle;
  if (low >= high) return;
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high)
{
  int pivot;
  pivot = *low;
  for (;;) {
    while (high > low && *high > pivot) high--;
    if (low == high) break;
    *low = *high;
    low++;
    while (high > low && *low <= pivot) low++;
    if (low == high) break;
    *high = *low;
    high--;
  }
  *low = pivot;
  return low;
}
