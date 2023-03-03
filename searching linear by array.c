#include<stdio.h>
int main()
{

    int num []={10,5,30,40,50,60,70};
    int value, pos =-1,i;
    printf ("enter the value you want to search:");
    scanf ("%d",value);
    for (i=0; i<7; i++)
    {

        if (value ==num [i])
        {
            pos =i+1;
            break;
        }

    }
    if (pos = -1)
    {
        printf ("item  is not found");

    }
    else
    {
        printf ("item is found at %d position ",pos);
    }
    return 0;
}
