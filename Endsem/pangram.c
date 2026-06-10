#include <stdio.h>
int main(){
    char s[500];
    fgets(s,sizeof(s),stdin);

    int count = 0;

    for(char i = 'a'; i<= 'z'; i++){
        // int found = 0;
        for(int j = 0;s[j]!='\0';j++){
            if(s[j]==i){
                count++;
                break;
            }
        }
        // if(!found)
        // printf("%c ",i);
    }
    if(count==26){
    printf("Pangram");
    printf("%d",count);
    }
    else{
    printf("Not Pangram");
    printf("%d",count);
    }
    return 0;

}