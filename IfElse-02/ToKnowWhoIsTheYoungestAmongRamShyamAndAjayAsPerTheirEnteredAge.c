#include<stdio.h>
int main()
{ int x1;
  printf("Enter age of Ram:");
  scanf("%d",&x1);
 
  int x2;
  printf("\nEnter Age of Shyam:");
  scanf("%d",&x2);  

  int x3;
  printf("\nEnter age of Ajay:");
  scanf("%d",&x3);

  if(x1<x2 && x1<x3)
  {
   printf("\nRam is the youngest among all");
    }

  if(x2<x1 && x2<x3)
  {
   printf("\nShyam is the youngest among all");
    }

  if(x3<x1 && x3<x2)
  {
   printf("\nAjay is the youngest among all");
    }

  return 0;

}