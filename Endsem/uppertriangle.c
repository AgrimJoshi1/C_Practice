#include <stdio.h>
int main(){
    //Sum of lower triangular matrix
#include <stdio.h>
int main(){
    int r,n;
    scanf("%d", &r);
    scanf("%d", &n);
    int arr[r][r];

    for(int i=0;i<r;i++){
        for (int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            if(i>=j)
            sum += arr[i][j];
        }
    }
    if(sum==0){
        printf("Upper triangular")
    }

}
}