#include <stdio.h>

void mostrarSerie(int n);
int sumarSerie(int n);

void mostrarSerie(int n) {
    int primer_num = 57;
    int diferencia = 2;
    int num_actual = primer_num;

    for (int i = 1; i <= n; i++) {
        printf("número %d: %d\n", i, num_actual);
        num_actual -= diferencia;
        diferencia++;
    }
}

int sumarSerie(int n) {
    int primer_num = 57;
    int diferencia = 2;
    int num_actual = primer_num;
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        suma += num_actual;
        num_actual -= diferencia;
        diferencia++;
    }

    return suma;
}

int main() {
    int n;
    printf("Escriba la cantidad de números que deseas mostrar:");
    scanf("%d", &n);

    mostrarSerie(n);
    printf("La suma de los %d números es: %d\n", n, sumarSerie(n));

    return 0;
}
