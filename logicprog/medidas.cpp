#include "stdio.h"
#include "math.h"

int main() {
    float a1, b1, c1, a2, b2, c2, a3, b3, a3, totalQuadrado, totalTriangulo, totalTrapezio;

    printf("Insira o valor de A lado do quadrado do quadrado: ");
    scanf("%f", &a1);
    totalQuadrado = a1 * a1;

    printf("Insira o valor de A e B para o triangulo: ");
    scanf("%f %f", &a2, &b2);
    totalTriangulo = (a2 * b2) / 2;

    printf("Insira o valor de A, B e C para calcular o valor da area do trapezio: ");
    scanf("%f %f %f", &a3, &b3, &c3);
    totalTrapezio = ((a3 + b3) * c3) / 2;

    printf("Area do quadrado: %f", totalQuadrado);
    printf("Area do triangulo: %f", totalTriangulo);
    printf("Area do trapezio: %f", totalTrapezio);

    return 0;
}