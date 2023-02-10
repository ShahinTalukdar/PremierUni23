#include <stdio.h>
int main(){
    char a,b,c,d,e,f;
    a='s', b='h', c='a', d='h', e='i', f='n';
    printf ("this is the name of %c%c%c%c%c%c \n" , a,b,c,d,e,f) ;
    printf ("this is uppercase style %c%c%c%c%c%c \n", toupper (a), toupper(b),toupper (c),toupper (d),toupper (e),toupper (f));
    printf ("this is the lowercase style %c%c%c%c%c%c \n",tolower (a),tolower(b),tolower(c),tolower(d),tolower(e),tolower(f));
    return ;
}
