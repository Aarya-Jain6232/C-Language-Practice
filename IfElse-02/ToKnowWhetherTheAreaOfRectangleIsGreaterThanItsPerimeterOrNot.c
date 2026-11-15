#include<stdio.h>
int main()
{ int l;
    printf("Enter The Length:");
    scanf("%d",&l);
    int b;
    printf("\nEnter The Breadth:");
    scanf("%d",&b);

    int area=l*b;
    int perimeter= 2*(l+b);

    if(area>perimeter){
    printf("The Area of Rectangle Is Greater Than Its Perimeter");
    }

    else {
        printf("The Area of Rectangle Is Not Greater Than Its Perimeter");
    }
    
    return 0;

}