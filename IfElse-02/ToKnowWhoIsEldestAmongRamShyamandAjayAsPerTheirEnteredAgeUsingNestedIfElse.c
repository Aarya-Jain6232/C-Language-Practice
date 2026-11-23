#include<stdio.h>
int main()
{ int a;
    printf("Enter age of Ram:");
    scanf("%d",&a);
 
  int b;
    printf("\nEnter Age of Shyam:");
    scanf("%d",&b);  

  int c;
    printf("\nEnter age of Ajay:");
    scanf("%d",&c);

 if(a>b){
    if(a>c){
     printf("\n%d is the greatest",a);
               }
    else{
     printf("\n%d is the greatest",c);      }               
    }
 else{// b>a 
    if(b>c){
     printf("\n%d is the greatest",b);}
    else{
     printf("\n%d is the greatest",c);}        
    }    
 
  return 0;

}