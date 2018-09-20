#include <stdio.h>

int main()
{
    /*
     25=1 1 0 0 1
     15=0 1 1 1 1
     -------------
        1 1 1 1 1     if we use | the these are or like and operator

    */

    int result = 25 | 15;
    printf("%d \n", result);

     /*
     25=1 1 0 0 1
     15=0 1 1 1 1
     -------------
        0 1 0 0 1=9   if we use & the these are added like and operator

    */

    int answer = 25 & 15;
    printf("%d \n", answer);

    /* if i use << -> left shift operator
    it shift bits of binary number
    16=10000
    but x<<2 we shift left by 2 bits
    so 1000000=64
     */
    int x=16;
    int res=x<<2;
    printf("%d \n", res);
    /* >>-> right shift operator
    y>>2
    16=10000 convert into 100=4  */
    int y=16;
    int resul=y>>2;
    printf("%d \n", resul);


    return 0;
}
