#include <stdio.h>
#include "myMath.h"

int main()
{
    double x ;
    printf("enter x value \n");
    if( scanf("%lf" , &x )  != 1){
       printf("this is not a value!!");
        return 0;
    }
    double  f;
    double a =  Exponent((int)x);
    double b = Power(x,3);
    f=add((float) a,(float) b);
    f=sub((float) f,2);
    printf("f(x) = e^x + 𝑥^3 − 2 = %.4f \n", f);
    a = mul(3,x);
    b = Power(x,2);
    b = mul(b,2);
    f=add((float) a,(float) b);
    printf("f(x) = 3x + 2(X^2) = %.4f \n", f);
    a = Power(x,3);
    a = mul(4,a);
    a = div(a,5);
    b = mul(2,x);
    b = sub(a,b);
    printf("f(x) = (4(x^3))/5 -2x  = %.4f \n", f);

    return 0;
}

