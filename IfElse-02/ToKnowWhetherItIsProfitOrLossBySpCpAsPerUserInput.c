#include <stdio.h>
int main()
{ int cp;
    printf("Enter Cost Price :");
    scanf("%d",&cp);
  int sp;
    printf("\nEnter Selling price :");
    scanf("%d",&sp);
    if(cp<sp){
        printf("\nProfit");
    }
    if(cp>sp){
        printf("\nLoss");
    }
    if(cp==sp){
        printf("\nNeither Profit Nor Loss");
    }
    return 0;

}