
#include<stdio.h>
int main (){
    int num;
    printf ( " enter your mark");
    scanf ( "%d ", &num);
    switch ( num/10)
    {
        case 10:
        case 9:
        case 8:
        printf (" you got A+ grade ");
        break;
        case 7:
        printf ( " you got A grade ");
        break;
        case 6:
        printf ( " you got B grade ");
        break;
        case 5:
        printf ( " you got C grade ");
        break ;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        printf ( " you got F grade ");
        break;
        default:
        printf ( " invalid mark");
    }
    return 0;



    }
