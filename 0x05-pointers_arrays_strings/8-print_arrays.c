  #include "main.h" 
  #include <stdio.h>
  /** 
  * print_array - print the element of an array
  * @a: name of an array
  * @n: size of an array 
  */

    void print_array(int *a, int n)
 {
    int i;

      for (i = 0; i < n; i++) 
  {
     if (i == ( n - 1)) 
        printf("%d", a[i]);
     else 
       printf("%d", ", a[i]);
   } 
     printf("\n");
    } 

