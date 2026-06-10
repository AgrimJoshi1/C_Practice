#include <stdio.h>
int main(){
    int t,m,n;
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {2,3,4,5};

    int sum1 = 0;
    int sum2 = 0;

    for(int i = 0; i<5; i++){
        sum1+=arr2[i];
    }
    for(int i = 0; i<4; i++){
        sum2+=arr2[i];
    }
    printf("%d",sum1-sum2);

    return 0;
}