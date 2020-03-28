#include <stdio.h> 

int main(void) 
{
   int a = 16;
   int b = 8;
   int c = -35;

   a = 10;
   b = 17;
   c = 3;
   printf("a: ");
   scanf("%d", &a);
   printf("b: ");
   scanf("%d", &b);
   printf("c: ");
   scanf("%d", &c);
   printf ("\n");
   // printf ("a: %d\n", a); 
   // printf ("b: %d\n", b); 
   // printf ("c: %d\n", c); 
   int ac = a*c;  
   int acabs = abs(ac);

   int x1, x2;  

   for (int i = 1; i < acabs; ++i)
   {
      x1 = acabs / i;
      if (x1 * i == acabs) 
      {
         if (ac < 0) 
         {
           if (-x1 + i == b) 
           {
             printf ("%d, %d\n", i, -x1);
             break;
           }
           else if (x1 - i == b) 
           {
             printf ("%d, %d\n", -i, x1);
             break;
           }
         }
         else if (x1 + i == b) 
         {
             printf ("%d, %d\n", i, x1);
             break;
         }
      }
   }  

}