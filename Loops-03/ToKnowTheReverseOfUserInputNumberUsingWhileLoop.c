#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Number :\n");
    scanf("\n%d",&n);

    int LastDigit=0;
    int reverse=0;
   
    while(n!=0){
        LastDigit = n%10;
        reverse = reverse*10 + LastDigit;
        n=n/10;
    }
     printf("The Reverse of the Entered number is :%d",reverse);
      
      return 0;

}
