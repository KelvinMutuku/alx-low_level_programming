  #include "main.h"
  #include <stdio.h>

  /** 
  *  _strcpy -  copies a string into a deztinated variable
  * @dest: destination char argument of characters 
  * @src: source char argument of characters 
  * Return: a string of character upon success 
  */
    char*_strcpy(char *dest, char *src) 
{
      int l;
      int i;

 while (src[l] != '\0' ) 
  {  
      l++;
  } 

   for(i = 0; i < l ; i++) 
  { 
     dest[i] = src[i];
  } 
    dest[i] = '\0';
     return(dest);
  } 
 
    
    
   

