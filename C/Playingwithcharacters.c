#include <stdio.h>
int main() 
{
    char ch;
    char s[100];
    char sen[122];
    scanf("%c\n%s\n%[^\n]",&ch,&s,&sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}
