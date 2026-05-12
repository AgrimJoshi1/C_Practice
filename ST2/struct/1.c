//make struct student marks and stname and print student name with hightest marks
#include <stdio.h>
struct student{
    char name[50];
    int marks;
};
int main(){
    int T;
    scanf("%d",&T);
    struct student st[T];

    for(int i = 0; i<T;i++){
        scanf("%s",st[i].name);
        scanf("%d",&st[i].marks);

    }

        int max = st[0].marks;
        int ind = 0;
        for(int i = 0; i<T;i++){
            if(max<st[i].marks){
                ind = i;
            }

        }
        printf("%s",st[ind].name);
    


}
