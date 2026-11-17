#include <stdio.h>
int main()
{ 
  int x;
  printf("\nEnter 1st side:");
  scanf("%d",&x);
 
  int y;
  printf("\nEnter 2nd side:");
  scanf("%d",&y);

  int z;
  printf("\nEnter 3rd side:");
  scanf("%d",&z);
  
  if(x+y>z && y+z>x && z+x>y)
  { printf("\nValid Triangle");
  }      
  else{
   printf("\nInvalid Triangle");
    }
return 0;

}