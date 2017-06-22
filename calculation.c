#include <stdio.h>

double addition(double oneNumber,double twoNumber){
    double summ = 0;
    summ = oneNumber + twoNumber;
    
    return summ;
}

double subtraction(double oneNumber,double twoNumber){
    double minm = 0;
    minm = oneNumber - twoNumber;
    
    return minm;
}

double multiplication(double oneNumber,double twoNumber){
    double pro = 0;
    pro = oneNumber * twoNumber;
    
    return pro;
}

double division(double oneNumber,double twoNumber){
    double div = 0;
    if(twoNumber != 0){
        div = oneNumber / twoNumber;
        
    } else printf("Похоже, что вы делите на нуль. Так нельзя :) \n");
    
    return div;
}

