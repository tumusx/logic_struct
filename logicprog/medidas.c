#include "stdio.h"
#include "math.h"

int main() {
    float a, b, c, totalQuadrado, totalTriangulo, totalTrapezio;

    printf("Insira o valor de A lado do quadrado do quadrado: ");
    scanf("%f", &a);
    totalQuadrado = a * a;

    printf("Insira o valor de A e B para o triangulo: ");
    scanf("%f, %f", &a, &b);
    totalTriangulo = (a * b) / 2;

    printf("Insira o valor de A, B e C para calcular o valor da area do trapezio: ");
    scanf("%f, %f, %f", &a, &b, &c);
    totalTrapezio = ((a + b) * c) / 2;

    printf("Area do quadrado: %f", totalQuadrado);
    printf("Area do triangulo: %f", totalTriangulo);
    printf("Area do trapezio: %f", totalTrapezio);

    return 0;
}