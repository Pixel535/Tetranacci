#include <stdio.h>
#include <stdlib.h>


int ciag(int n)
{
       if (n == 0) return 0;

       else if (n == 1) return 0;

       else if (n == 2) return 0;

       else if (n == 3) return 1;

       else return (ciag(n-1)+ciag(n-2)+ciag(n-3)+ciag(n-4));
}





int main()
{
   int n = 20;
   printf("Pierwsze 20 wyrazow ciagu Tetranacciego :\n");
   for (int i = 0; i < n; i++)
   {
        printf("%d ", ciag(i));
   }

   return 0;
}
