#include <stdio.h>
#include <stdlib.h>
void TOH(int n, char s,char d,char t)
{
    if(n>0)
    {
        TOH(n-1,s,t,d);
        printf("\nMove %d disc from %c to %c",n,s,d);
        TOH(n-1,t,d,s);
    }
}
int main()
{
    int n;
    printf("Read number of disc:");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    return 0;
}
