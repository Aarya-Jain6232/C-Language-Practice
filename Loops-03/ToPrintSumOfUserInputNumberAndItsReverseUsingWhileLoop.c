#include<stdio.h>
int main(){
    int Number;
    printf("Enter any number:\n");
    scanf("%d",&Number);
   
       int x=Number;
       int reverse=0;
       int LastDigit=0;
       int Sum=0;
        
       while(Number>0){
             LastDigit = Number % 10;
             reverse = (reverse*10) + LastDigit;
             Number = Number/10;
            }

            Sum = x + reverse;
             printf("The Sum of the entered number and its reverse is :%d",Sum);
        
        return 0;
    }
