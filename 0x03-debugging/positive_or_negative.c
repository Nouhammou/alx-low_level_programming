#include "main.h"
#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
  * Description: 'the program's description'
  * Return: Always 0 (Success)
  */
void positive_or_negative(int i)
{
	if (i > 0)
                  printf("%d is positive\n", i);
          else if (i == 0)
                  printf("%d is zero\n", i);
          else
                  printf("%d is negative\n", i);     
}	  
