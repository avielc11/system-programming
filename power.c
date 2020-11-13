#include <stdio.h>

double Exponent( int y);
double Power(double x , int y);

double Exponent(int x){
    double e = 2.71828182846;
    e=Power(e,x);
    return e;
}

double Power(double x , int y){
    int i;
    double sum = 1.0;
    for( i=0 ; i < y ; i++){
        sum *= x;
    }
    return sum;
}