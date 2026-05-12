//avg salary and name of emp with min salary
#include <stdio.h>
struct employee{
    char name[100];
    int salary;

};
int main(){
    int n; 
    scanf("%d",&n);
    struct employee e[n];
    for (int i = 0; i<n;i++){
        scanf("%s",e[i].name);
        scanf("%d",&e[i].salary);
    }
    int sum = 0, avg = 0;
    int min = 0,ind = 0;
    for(int i = 0; i < n; i++){
        sum += e[i].salary;
        avg = sum/n;

        if(min > e[i].salary){
            ind = i;
        }

    }
    printf("%d\n",avg);
    printf("%s",e[ind].name);

    
}