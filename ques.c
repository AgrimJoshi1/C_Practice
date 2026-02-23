//reverse string 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int reversed = 0;
    reversed = reversed * 10 + (n % 10);
    n = n / 10;
    reversed = reversed * 10 + (n % 10);
    n = n / 10;
    reversed = reversed * 10 + (n % 10);
    n = n / 10;
    reversed = reversed * 10 + (n % 10);
    printf("%d", reversed);

    return 0;
}