#include <stdio.h>

//Funcion principal
int main(){
    char operador;
    double num1, num2, resultado;

    printf("ingrese una opreacion (+, -, *, /); ");
    scanf("%c", &operador);

    //Solicitar los numeros para la operacion
    printf("ingrse el primer numero: ");
    scanf("%lf", &num1);
    printf("ingrese el segundo numero:");
    scanf("%lf", &num2);

    //Realizar la operacion
    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf \n", num1, num2, resultado);
        break;
    case '-':
        resultado = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf \n", num1, num2, resultado);
        break;
    case '*':
        resultado = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf \n", num1, num2, resultado);
        break;
    case '/':
        if (num2 !=0)
        {
            resultado = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf \n", num1, num2, resultado);
        }else{
            printf("Error: Division por cero. \n");
        }
        break;
    default:
        printf("Operador no valido. \n");
        break;
    }
    return 0;
}