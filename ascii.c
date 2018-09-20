#include <stdio.h>

int main()
{
    int i;
    //ascii value starts from 32 and onwards
    for(i=32;i<=129;i++)
    {
        printf("%d %c \t",i,i);
    }
    return 0;
}
