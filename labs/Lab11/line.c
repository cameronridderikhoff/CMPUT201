#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20
struct node
{
  char word[MAX_WORD_LEN+1];
  int wordLen;
  struct node *next;
};
struct node *firstWord;
int line_len = 0;
int num_words = 0;


void clear_line(void) {
        firstWord = NULL;
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word)
{
  struct node *t1=firstWord;
  if (t1 != NULL)
    {
      while(t1->next != NULL)
	{//get the last element of the linked list
	  t1=t1->next;
	}
      line_len++;
     
      struct node *t2;
      t2=create(word, t1);
      
      num_words++;
    }
  else
    {
      firstWord=create(word, NULL);
      
      line_len += strlen(word);
      num_words++;
    }
  
}

int space_remaining(void) {
  return MAX_LINE_LEN - line_len;
}

void write_line(void) {
	int extra_spaces, spaces_to_insert, i, j;

	extra_spaces = MAX_LINE_LEN - line_len;
	printf("extrasp=%d", extra_spaces);
	struct node *t1=firstWord;
	
	while (t1->next != NULL)
	  {
	    for (i = 0; i < t1->wordLen; i++)
	      {
	      
		if (t1->word[i] != ' ')
		  {
		    putchar(t1->word[i]);
		  }
		else
		  {
		    spaces_to_insert = extra_spaces / (num_words - 1);
		    for (j = 1; j <= spaces_to_insert + 1; j++)
		      {
			putchar(' ');
		      }
		    extra_spaces -= spaces_to_insert;
		    num_words--;
		  }
	      }
	    t1=t1->next;
	  }
	
	putchar('\n');
}

void flush_line(void) {
  char line[MAX_LINE_LEN];
	if (line_len > 0)
	  {
	    struct node *t1=firstWord;
	
	    while (t1->next != NULL)
	      {
		strcat(line, t1->word);
		t1=t1->next;
	      }
	    puts(line);
	  }
}

struct node *create(const char word[MAX_WORD_LEN], struct node *prev)
{
  struct node *new_node = (struct node*)malloc(sizeof(struct node));
  if(new_node == NULL)
    {
      printf("Error creating a new node.\n");
      exit(0);
    }
   strcpy(new_node->word, word);
   new_node->wordLen=strlen(word);
   new_node->word[new_node->wordLen] = '\0';
   if (prev != NULL)
     prev->next=new_node;
   new_node->next=NULL;
 
  return new_node;
}
