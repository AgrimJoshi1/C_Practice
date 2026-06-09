//matrix input
#include <stdio.h>
int main(){
    int r,c,k;
    scanf("%d %d", &r,&c,&k);
    int arr[r][c];

    for(int i =0; i<r;i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum = 0;
    for(int i = 0; i<r; i++){
        sum+=arr[k][i];

        
    }
    printf("%d",sum);



    return 0;
}