#include<stdio.h>
int main()    {
   int n;
    printf("Enter Any Number :");
    scanf("%d",&n);
    
  long long a=3;
    for(int i=3;i<=n;i++){
        printf("%lld\n",a);
        a=a*4;
    }
    
    
    
    return 0;

}