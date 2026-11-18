#include <stdio.h>
int main()
{ int x;
  printf("Enter A Number :");
  scanf("%d",&x);
  
  if((x%5==0 || x%3==0) && x%15 !=0) 
{ printf("It is divisible by 5 or 3 but not divisible by 15");
}       
  else{ 
printf("The number does not fulfill the required necessity");
   }
  return 0;

}