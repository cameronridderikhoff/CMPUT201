#include <stdio.h>

int main()
{
  int gradeO; //numbers
  printf("Enter numerical grade: ");
  scanf("%d", &gradeO);
  int grade=gradeO/10;
  switch(grade)
    {
    case 0:
      if (gradeO<0)
	{
	  printf("Error, incorrect grade inputted.\n");
	  break;
	}
      printf("F\n");
      break;
    case 1:
      printf("F\n");
      break;
    case 2:
      printf("F\n");
      break;
    case 3:
      printf("F\n");
      break;
    case 4:
      printf("F\n");
      break;
    case 5:
      printf("F\n");
      break;
    case 6:
      printf("D\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 9:
      printf("A\n");
      break;
    case 10:
      if (gradeO==100)
	{
	  printf("A\n");
	  break;
	}
    default:
      printf("Error, incorrect grade inputted.\n");
      break;
    }
  return 0;
}
