//#include <stdio.h>

//int sumaArreglo(int arr[], int size) {
    //int suma = 0;
    //for (int i = 0; i < size; i++) {
        //suma += arr[i];
    //}
    //return suma;
//}

//int main() {
    //int arreglo[] = {1, 2, 3, 4, 5};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //int suma = sumaArreglo(arreglo, tamaño);
    //printf("la suma de los elementos del arreglo es: %d\n", suma);
    //return 0;
//}

//int maximoArreglo(int arr[], int size){
    //int max = arr[0];
    //for (int i = 0; i < size; i++){
        //if(arr[i] > max){
            //max = arr[i];
        //}
    //}
    //return max;
//}

//int main(){
    //int arreglo[] = {10 ,22 ,5, 3, 99, 6};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //int max = maximoArreglo(arreglo, tamaño);
    //printf("el valor maximo en el arreglo es: %d\n", max);
    //return 0;
//}

//void invertirArreglo(int arr[], int size){
    //for (int i = 0; i < size /2; i++){
        //int temp = arr[i];
        //arr[i] = arr[size - 1 - i];
        //arr[size - 1 - i] = temp;
    //}
//}

//void imprimirArreglo(int arr[], int size){
    //for (int i = 0; i < size; i++){
        //printf("%d", arr[i]);
    //}
    //printf("\n");
//}

//int main(){
    //int arreglo[] = {1, 2, 3, 4, 5};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //printf("arreglo original: ");
    //imprimirArreglo(arreglo, tamaño);
    //invertirArreglo(arreglo, tamaño);
    //printf("arreglo invertido:");
    //imprimirArreglo(arreglo, tamaño);
    //return 0;
//}

//int buscarElemento(int arr[], int size, int valor){
    //for (int i = 0; i < size; i++){
        //if(arr[i] == valor){
            //return i;
        //}
    //}
    //return -1;
//}

//int main(){
    //int arreglo [] = {5, 8, 12, 20, 25};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //int valor = 20;
    //int indice = buscarElemento(arreglo, tamaño, valor);
    //if (indice != -1){
        //printf("el valor %d se encuentra en el indice: %d\n", valor, indice);
    //}else{
        //printf("el valor %d no se encuentra en el arreglo. \n", valor);
    //}
    //return 0;
//}

//double promiedoArreglo(int arr[], int size){
    //int suma = 0;
    //for (int i = 0; i < size; i++){
        //suma += arr[i];
    //}
    //return (double)suma / size;
//}

//int main(){
    //int arreglo[] = {10,20,30,40,50};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //double promedio = promiedoArreglo(arreglo, tamaño);
    //printf("el promedio de los elementos del arreglo es: %.2f\n",promedio);
    //return 0;
//}

//int minimoArreglo(int arr[], int size){
    //int min = arr[0];
    //for (int i = 0; i < size; i++){
        //if(arr[1] < min){
            //min = arr[i];
        //}
    //}
    //return min;
//}

//int main(){
    //int arreglo[] = {10, 22, 5, 3, 99, 6};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //int min = minimoArreglo(arreglo, tamaño);
    //printf("el valor minimo en el arreglo es: %d\n", min);
    //return 0;
//}

//void ordenarArreglo(int arr[], int size){
    //for (int i = 0; i < size - 1; i++){
        //for (int j = 0; j < size - 1 - i; j++){
            //if(arr [j] > arr[j + 1]){
                //int temp = arr[j];
                //arr[j] = arr[j + 1];
                //arr[j + 1] = temp;
            //}
        //}
    //}
//}

//void imprimirArreglo(int arr[], int size){
    //for (int i = 0; i < size; i++){
        //printf("%d",arr[i]);
    //}
    //printf("\n");
//}

//int main(){
    //int arreglo[] = {5, 2, 9, 1, 5, 6};
    //int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);
    //printf("arreglo original:");
    //imprimirArreglo(arreglo, tamaño);
    //ordenarArreglo(arreglo, tamaño);
    //printf("arreglo ordenado:");
    //imprimirArreglo(arreglo, tamaño);
    //return 0;
//}