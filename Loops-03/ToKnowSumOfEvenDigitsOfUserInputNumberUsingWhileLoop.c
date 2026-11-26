#include<stdio.h>
int main(){
    int n;
    printf("enter any Number :\n");
    scanf("%d",&n);

    int sum=0;
    int Lastdigit=0;
    while (n!=0)
    {
    
    Lastdigit=n%10;
  if(Lastdigit%2!=0){
    n=n/10;
      continue;
  }

    sum=sum+Lastdigit;
     n=n/10;
      }

      printf("the sum of digits are %d",sum); 
      return 0;}