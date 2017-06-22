#include <stdio.h>
#include "function.h"

double condition(double operand);

double oneNumber = 0;
double twoNumber = 0;
double operand = 0;

int main(){
    
    double sum = 0;
    
    printf("Добро пожаловать в программу калькулятор! \n");
    printf("В данной программе:'1 соответсвует +' \n");
    printf("'2' соответсвует '-' \n");
    printf("'3' соответсвует '*' \n");
    printf("'4' соответсвует '/' \n");
    
    printf("Введите первое число: \n");
    scanf("%lf", &oneNumber);
    printf("Введите операцию : \n");
    scanf("%lf", &operand);
    printf("Введите второе число: \n");
    scanf("%lf", &twoNumber);
    
    sum = condition(operand);
    printf("Ответ: ");
    printf("%lf", sum);
    printf("\n");
    
    return 0;
    
}

double condition(double operand){
    if (operand == 1) {
        return addition(oneNumber,twoNumber);
    }else if (operand == 2) {
        return subtraction(oneNumber,twoNumber);
    }else if (operand == 3) {
        return multiplication(oneNumber,twoNumber);
    }else if (operand == 4) {
        return division(oneNumber,twoNumber);
    }else return 0;
}
