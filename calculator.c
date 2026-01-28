#include <stdio.h>

int main(){
    //Variables
    char operador;
    double num1, num2, resultado;

    printf("\n--Calculadora Simple en C--\n");
    printf("\nOpciones disponibles: +, -, *, /\n");
    printf("Ingresa la operacion a realizar (ejemplo: 5 + 3): ");

    //Leemos el primer numero, el operador y el segundo numero
    if(scanf("%lf %c %lf", &num1, &operador, &num2) != 3){
        printf("\nError!: Formato de entrada no valido.\n");
        return 1;
    }

    //Realizamos la operacion segun el operador ingresado
    switch (operador){
        case '+':
            resultado = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;

        case '/':
            if(num2 != 0){
                resultado = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("\nError!: Division por cero no permitida.\n");
            }
            break;

        default:
            printf("\nError!: Operador '%c' no reconocido.\n", operador);   
            break;
    }
    return 0;
}