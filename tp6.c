#include <stdio.h>
#include <math.h>
#define PI 3.14159

float calcularAreaRectangulo(float lr, float hr); //l:longitud h:altura r:rectangulo
float calcularPerimetroRectangulo(float, float);
float calcularDiagonalRectangulo(float, float);
float calcularAreaCirculo(float rc);// rc: radio del circulo
float calcularPerimetroCirculo(float); 
void imprimirResultados(float, float, float);

int main(void)
{
    int figura = 0;
    float A = 0, p = 0, d = 0;

    do
    {
        printf("Ingresar la figura desea calcular \n(1: Rectangulo, 2: Circulo): ");
        scanf("%d", &figura);

        if (figura != 1 && figura != 2)
        {
            printf("El numero ingresado no es valido.\n");
            continue;
        }

    } while (figura != 1 && figura != 2);

    switch (figura)
    {
    case 1:
    {
        float lr, hr;
        printf("Opcion de rectangulo seleccionada.\n");
        printf("Ingresar la longitud:");
        scanf("%f", &lr);
        printf("Ingresar la altura:");
        scanf("%f", &hr);

        A = calcularAreaRectangulo(lr, hr);
        p = calcularPerimetroRectangulo(lr, hr);
        d = calcularDiagonalRectangulo(lr, hr);
        break;
    }

    case 2:
    {
        float rc;
        printf("Opcion de circulo seleccionada.\n");
        printf("Ingresar radio del circulo:");
        scanf("%f", &rc);

        A = calcularAreaCirculo(rc);
        p = calcularPerimetroCirculo(rc);
        break;
    }
    }

    imprimirResultados(A, p, d);
    printf("\n");
    return 0;
}

float calcularAreaRectangulo(float lr, float hr)
{ // retorna:área calculada
    return lr * hr;
}
float calcularPerimetroRectangulo(float lr, float hr)
{ // retorna:perimetro calculado
    return 2 * (lr + hr);
}
float calcularDiagonalRectangulo(float lr, float hr)
{ // retornar:diagonal del rectangulo
    return sqrt(lr * lr + hr * hr);
}
float calcularAreaCirculo(float rc)
{ // retorna:área calculada
    return PI * (rc * rc);
}
float calcularPerimetroCirculo(float rc)
{ // retornar:perimetro calculado
    return 2*PI*rc;
}
void imprimirResultados(float A, float p, float d)
{
    if (d != 0)
    {
        printf("El area del rectangulo es: %.2f\n", A);
        printf("El perimetro del rectangulo es: %.2f\n", p);
        printf("La diagonal del rectangulo es: %.2f\n", d);
    }
    else
    {
        printf("El area del circulo: %.2f\n", A);
        printf("El perimetro del circulo: %.2f\n", p);
    }
}
