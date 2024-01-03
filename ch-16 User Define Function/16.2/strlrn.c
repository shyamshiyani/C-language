#include <stdio.h>

int l(char s[]) 
{
    int l=0;
    while (s[l]!='\0')
{
        l++;
}
    return l;
}

int main() {
    char str[100];
    
    printf("Enter any string=");
    scanf("%s",&str);
    
    int length=l(str);
    printf("Length of the string=%d\n",length);
    return 0;
}
