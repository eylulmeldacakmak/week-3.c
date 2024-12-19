#include <stdio.h>

int factorialfor(int number);
int factorialwhile(int number);
int factorialrecursive(int number);
int fibonacchifor(int number);
int fibonacchiwhile(int number);
int fibonacchirecursive(int number);


int main(){
    int factorial_5 = factorialfor(5);
    printf("Factorial %d\n", factorial_5);
    return 0;
}

int factorialfor (int number){
    if(number<0){
        return 0;
    }
    if (number==0){
        return 1;
    }
    int result = 1;
    for (int i = 1; i<= number;i++){
        result = result * i;
    }
    return result;
}


int factorialwhile (int number){
    if(number<0){
        return 0;
    }
    if (number == 0){
        return 1;
    }
    int result = 1;
    while (number > 0){
        result = result * number;
        number--;
        return result;
    }
}

int factorialrecursive (int number){
    //Base Case
    if (number == 1 || number == 0){
        return 1;
    }
        return number * factorialrecursive(number-1);
}

int fibonacchifor(int number){
    int first = 1, second = 1, result = 0;
    if(number == 1 || number == 2){
        return 1;
    }
    for(int i = 3; i<= number; i++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
    }

int fibonacchiwhile(int number){
    int first = 1, second = 1, result = 0;
    if(number == 1 || number == 2){
        return 1;
    }
    while(number >= 3){
        result = first + second;
        first = second;
        second = result;

        number--;
    }
    return result;
}

int fibonacchirecursive(int number){
    //Base Case
    if(number == 1 || number == 2){
        return 1;
    }
    return fibonacchirecursive (number-1) + fibonacchirecursive (number-2);
}