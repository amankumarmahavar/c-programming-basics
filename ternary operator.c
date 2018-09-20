#include <stdio.h>

int main()
{
    int i=1;
    int j;

    //if(i==1)
    //  j=5;
    //else
    //    j=6;
    //instead of this use ternary operator= ?exp1:exp2
    j = i==1?5:6;

        printf("%d", j);
    return 0;
}
