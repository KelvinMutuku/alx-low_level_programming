  include "main.h"

  /** 
   * rev_string - Write a function that reverses a string
   * 
   * @s: string var pointer 
   */
   void rev_string(char *s) 
  {
     int i, j, temp;
       i= 0;
       j= 0;

     while (s[i] != '\0' ) 
     {
            j++;
} 
       j--;
       while (j>i) 
{
     temp = s[j];
     s[j--] = s[i];
     s[i++] = temp;
} 
    } 
