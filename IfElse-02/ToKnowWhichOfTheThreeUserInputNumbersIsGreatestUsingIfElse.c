#include<stdio.h>
int main()
{ int n1;
    printf("Enter First Number :");
    scanf("%d",&n1);
    
    int n2;
    printf("Enter Second number :");
    scanf("%d",&n2);

    int n3;
    printf("Enter Third number :");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("The First Number Is The Greatest");
    }
    
    if(n2>n1 && n2>n3){
        printf("The Second Number Is The Greatest");
    }
    
    if(n3>n1 && n3>n2){
        printf("The Third Number Is The Greatest");
    }
    
    
    return 0;

}