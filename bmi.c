/******************************************************************************

<18.5 | Bajo peso
18.5 a 24.9 | Normal
25.0 a 29.9 | Sobrepeso
>=30| Obesidad

IMC = peso (en kg) / (estatura (en m))^2

****************************************************************************/

#include <stdio.h>

int main()
{
    float x, y;
    printf("Ingrese su peso en kg:");
    scanf("\n %f", &x);
    printf("\nSu peso es: %.2f", x);
    printf("\nIngrese su altura en metros:");
    scanf("\n %f", &y);
    printf("\nSu altura es: %.2f", y);
    
    float hcuadrado= y*y;
    float IMC= x/hcuadrado;
    
    printf("\nSu IMC es: %f", IMC);
    
    printf("\n \nTABLA DE IMC \nPeso bajo: menor a 18.5 \nPeso Normal: entre 18.5 y 24.9 \nSobrepeso: entre 25 y 29.9 \nObesidad: de 30 en adelante");


    return 0;
}
