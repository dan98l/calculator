#include <stdio.h>

#include "function.h"

int main(){
    
    int oneNumber = 0;
    int twoNumber = 0;
    int operand = 0;
    
    printf("Добро пожаловать в программу калькулятор! \n");
    printf("В данной программе:'1 соответсвует +' \n");
    printf("'2' соответсвует '-' \n");
    printf("'3' соответсвует '*' \n");
    printf("'4' соответсвует '/' \n");
    
    printf("Введите первое число: \n");
    scanf("%d", &oneNumber);
    printf("Введите операцию : \n");
    scanf("%d", &operand);
    printf("Введите второе число: \n");
    scanf("%d", &twoNumber);

   
    return 0;
    
}
