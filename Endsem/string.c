#include <stdio.h>
int main (){
    int t;
    scanf("%d",&t);

    char s[100];
    scanf("%s",s);
    int counta = 0;
    int countx = 0;

    for(int i = 0; s[i] != '\0';i++){
        if(s[i]=='a'|| s[i]=='b')
        counta++;
        
        else if(s[i]=='x'|| s[i]=='y'){
            countx++;
        }
    }
    if(counta % 2 ==1 && countx %2 == 0)
    printf("YES\n");
    else
    printf("NO\n");

    return 0;
}
