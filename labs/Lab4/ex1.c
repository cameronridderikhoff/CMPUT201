#include <stdio.h>

int main()
{
  int nums[4]; //numbers
  printf("Enter 4 integers: ");
  scanf("%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3]);
  int largest=nums[0];
  int smallest=nums[0];
  for (int i=0; i<=3; i++)
    {
      if (nums[i] > largest)
	{
	  largest=nums[i];
	}
      if (nums[i] < smallest)
	{
	  smallest=nums[i];
	}
    }
  printf("Largest: %d\nSmallest: %d\n", largest, smallest);

}
