#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    quadrado = a * a;
    printf("AREA DO QUADRADO = %.4lf", quadrado);

    triangulo = (a * b) / 2;
    printf("\nAREA DO TRIANGULO = %.4lf", triangulo);

    trapezio = ((a + b) * c) / 2;
    printf("\nAREA DO TRAPEZIO = %.4lf", trapezio);

    return 0;
}
