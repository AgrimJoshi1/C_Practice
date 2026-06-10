//String reversal using recursion
#include <stdio.h>
void reversal(char s[100], int i){
    if(s[i] == '\0')
    return;

    reversal(s,i+1);
    printf("%c",s[i]);


}
int main(){

    char s[100];
    scanf("%s",s);
    reversal(s,0);

    return 0;
}