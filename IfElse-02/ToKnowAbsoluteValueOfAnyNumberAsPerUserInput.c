#include<stdio.h>
int main()
{ int x;
  printf("Enter any number:");
  scanf("%d",&x);
  
  if(x<0){
    x= x *(-1);
  }
   printf("\nThe Absolute Value Is :%d",x);
    return 0;

}