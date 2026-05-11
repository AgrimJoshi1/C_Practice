#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int cp,sp,pl,loss;
    scanf("%d",&cp);
    scanf("%d",&sp);
    pl = sp -cp;
    loss = cp-sp;
    
    if(pl>0){
        printf("Profit\n");
        printf("%d\n",pl);
    }
    else if(pl==0){
        printf("No Profit No Loss\n");

    }
    else{
        printf("Loss\n");
        printf("%d\n",loss);

    }
    
    

    return 0;
}