#include<stdio.h>
int main ()
{
    int i,j;
    int a[3][4] ={{5,6,7,8},{10,11,13,24},{23,45,45,34}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
