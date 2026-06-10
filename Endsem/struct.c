#include <stdio.h>
struct student {
    char name[10];
    int marks;
    int rollno;


};

int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<10;j++){
            scanf("%s",&s[i].name[j]);
        }
        scanf("%d",&s[i].marks);
        scanf("%d",&s[i].rollno);
    }
    int sum = 0;
    for(int i = 0; i<n;i++){
        sum += s[i].marks;
    }
    printf("%d",sum);


}