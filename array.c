#include <stdio.h>

int main()
{
    /* int i;

    int z[4] = {1, 2, 3, 4};
    for (i=0;i<=3;i++)
    {
        printf("%d \n", z[i]);
    } */
    int j,k;
    int d[3][4]=
    {
        {1,2,3,4},
        {4,5,6,7},
        {67,85,5,7}

    };
     for (j=0;j<3;j++)
     {
          for (k=0;k<4;k++)
          {
              printf("%d ", d[j][k]);
          }
          printf("\n");
     }
    return 0;


}
