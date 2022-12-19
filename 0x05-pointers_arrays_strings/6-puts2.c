   include "main.h"

  /** 
   *puts2 - prints string, followed by a new line, 
   * @str: pointer to the string to point 
   * Return: void
   */
   int void_puts2(char *str) 
  {
      int i = 0;

     while (str[i] != '\0' ) 
{   
     if (i % 2 == 0) 
   {
        _putchar(str[i]);
} 
     i++;
  } 
     _putchar('\n');
} 
