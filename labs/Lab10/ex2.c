#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *p, const void *q);

int main()
{
  char temp[21];
  char *parray[100];
  int n=0;
  int flag=1;
  //get words
  while(flag)
    {
      printf("Enter word: ");
      fgets(temp, 21, stdin);
      if (temp[0]=='\n') flag=0;
      parray[n]=malloc(strlen(temp)+1); //+1 for null char
      strcpy(parray[n], temp);
      n++;
    }
  qsort(parray, n, sizeof(parray[0]), compare);
  
  printf("In sorted order: ");
  for (int i=0; i<n; i++)
    {
      printf("%s ", parray[i]);
      free(parray[i]);
    }
  
 
  return 0;
}
int compare(const void *p, const void *q)
{
  return strcmp(* (char * const *) p, * (char * const *) q);
}
