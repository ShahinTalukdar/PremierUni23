#include<stdio.h>
int main(){
    int n,reversednumber =0, orginalnumber ,remainder;
    printf("enter an value to check:");
    scanf ("%d",&n);
    orginalnumber=n;
    while (n!=0)
    {
        remainder =n%10;
        reversednumber=reversednumber*10+remainder;
        n=n/10;
    }
    if (orginalnumber==reversednumber)
    {
       printf(" %d is palindrome \n", orginalnumber);
    }
    else
    {
        printf("% d is not palindrome \n",orginalnumber);

    }
    return 0;
}

