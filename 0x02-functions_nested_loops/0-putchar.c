#include <stdio.h>
#include "main.h"
/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
      int i;
      char word [] = "_putchar";
      for(i = 0 ; i <= 7; i++){

	   _putchar(word[i]); 
      }   
        _putchar('\n');

        return 0; 
   
}	
