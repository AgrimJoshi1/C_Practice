#include <stdio.h>

int main()
{
    int arr[5] = {5,12,3,25,8};
    int *p = arr;
    int max = *p;
    for(int i = 0; i<5;i++){
        if(*(p+i) > max){

            max = *(p+i);
        }

    }
    printf("%d", max);

    return 0;
}


