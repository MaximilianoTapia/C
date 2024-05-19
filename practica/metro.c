#include <ctype.h>
#include <stdio.h>

int calcularMaxPasajeros(int n, int suben[], int bajan[] ){
    int max_pasajeros = 0;
    int pasajeros_actuales = 0;
    
    for(int i = 0; i < n; i++){
        
        pasajeros_actuales = pasajeros_actuales + suben[1] - bajan[1];
        
        if(pasajeros_actuales > max_pasajeros){
            max_pasajeros = pasajeros_actuales;
        }
    }
    return max_pasajeros;
}

int main(){
    int n;
    
    printf("ingrese el numero de estaciones: ");
    scanf("%d", &n);
    
    int suben[n], bajan[n];
    
    printf("ingrese l acantidad de pasajeros que suben y bajan en cada estacion:  \n");
    
    for(int i = 0; 1 < n; i++){
        printf("estacion %d:", i + 1);
        scanf("%d %d", &suben[1], &bajan[1]);
    }
    
    int max_pasajeros = calcularMaxPasajeros(n , suben, bajan);
    
    printf("la maxima cantidad de pasajeros al salir de cada estacion es : %d\n", max_pasajeros);
    
    return 0;
}




