#include <stdio.h>
int main(){
    char name[50];
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    printf("Enter Name: ");
    scanf("%s", &name);

    printf("Your name is %s\n" ,name);
    printf("Your age is %d\n" ,age);
}