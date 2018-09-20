#include <stdio.h>

int main()
{
    int i;
    printf("enter a number btw 0 to 2:");
    scanf("%d", &i);
    switch(i)
    {
    case 0:
           printf("zero");
        break;
        case 1:
           printf("one");
        break;
        case 2:
           printf("two");
        default:
            printf("wrong value");
        return 0;
    }
}
