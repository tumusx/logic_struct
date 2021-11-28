#include "stdio.h"
#include "math.h"

int main() {
    float kmPercorrido, combustGasto, consumoMedio;

    printf("Insira a distância percorrida: " );
    scanf("%f", &kmPercorrido);

    printf("Insira a quantidade de combustível gasto: ");
    scanf("%f", &combustGasto);

    consumoMedio = (kmPercorrido/combustGasto);

    printf("Consumo medio de: %0.2f", consumoMedio);

    return 0;
}

