#include <stdio.h>
int main(){

    int basicsalary ;
    float hra, da,  grosssalary;
    printf ( "enter basic salary :");
    scanf( "%d", &basicsalary);
    if ( basicsalary < 10000){
        hra = basicsalary * 0.20;
        da = basicsalary * 0.80;

    }
    else if ( basicsalary < 20000){
        hra = basicsalary * 0.25;
        da  = basicsalary *0.90;

    }
    else  {
        hra = basicsalary * 0.30;
        da = basicsalary  * 0.95;


    }
    grosssalary = basicsalary + hra+ da;
    printf ( "Gross Salary is : % 2f" ,grosssalary  );
    return 0;
}


