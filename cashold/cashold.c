#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
  float dollar;
  int cent,counter=0;
  dollar = get_float("Enter the Dollar amount-");
  cent = round (dollar*100);
  printf("Cent Equals %i \n",cent);
  while(cent>=25)
  {
      cent-=25;
      counter++;
  }
  while(cent>=10)
  {
      cent-=10;
      counter++;
  }
  while(cent>=5)
  {
      cent-=5;
      counter++;
  }
  while(cent>=1)
  {
      cent-=1;
      counter++;
  }
  printf("You will require %i coins \n",counter);
}
