#include<stdio.h>
int main(){
    int n;
    printf("Enter Any Number:\n");
    scanf("%d",&n);
    
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
     } 
     
     if (n==1) {
        printf("The Number Is neither Prime nor Composite");
    }
       else if(a==0) {
        printf("The Number Is Prime");
    }
        else {
            printf("The Number Is Composite");
        }

    
      return 0;
    }