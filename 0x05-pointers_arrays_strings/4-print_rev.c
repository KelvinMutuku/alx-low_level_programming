  include "main.h"

  /** 
   * print_rev- print reversed string, followed by a new line
   * @s: pointer to the string to point 
   * Return: void
   */

   void _print_rev(char *s) 
  {
     int swap;

     int i = 0;
     while (s[i]) 
            i++;
  while (i--) 
{  
      _putchar(s[i]);
  } 
     _putchar('/n');

  } 
