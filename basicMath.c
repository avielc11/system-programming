#include <stdio.h>
float add(float x , float y);
float sub(float x , float y);
double mul(double x , int y);
double div(double x , int y);


float add(float x , float y){
    return (float) x+y;    
}


float sub(float x , float y) {
     return (float) x-y;
}

double mul(double x , int y){
    return (double) x*y;
} 

double div(double x, int y){
    if( y == 0 ){
        printf("no possible to divide o /n");
        return x;
    }
    return (double) x/y;
}
