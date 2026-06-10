#include <stdio.h>
int main(){
    char s[100] = "aaabbccdd"; 
    int count = 0;

    for(int i = 0; s[i]!='\0';i++){
        count = 1;
        while(s[i]==s[i+1]){
            count++;
            i++;

        }
        printf("%d%c",count,s[i]);

    }
    return 0;
}
