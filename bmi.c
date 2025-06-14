// Nombre: Denise Victoria Perez Zeballos
// Legajo:  400874


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

    //Tp4 punto 3
    if (IMC <18.5) {
        printf("Usted se encuentra en: Peso bajo");
    }

    else if ((IMC >18.5) && (IMC <=24.9) {
	    printf("Usted se encuentra en: Peso normal");
    }

    else if ((IMC >=25) && (IMC<=29.9)) {
	    printf("Usted se encuentra en: Sobrepeso");
    }

    else if (IMC <30) {
	    printf("Usted se encuentra en: Obesidad");
    }

    return 0;
}
