#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h,i,j,k,l;
    do
    {
      h= get_int("Pyramid Height Required-");
      if (h>=1 && h<=8)
      break;
    }while(1);
    for(i=1;i<=h;i++)
     {
      for(k=h-1;k>=i;k--)
      printf(" ");
         for(j=1;j<=i;j++)
         printf("#");
      printf("\n");
     }
}
