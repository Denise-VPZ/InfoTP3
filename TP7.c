#include <stdio.h>
#define TAM 5

int main(void) {   
    int codigo_barra[TAM];
    float precio[TAM];


    printf("\nIngresar 5 productos, se solicitara el codigo y el precio.\n");
    for (int i=0; i<TAM; i++){ 
        do {         
            printf("Ingresar el codigo de barras (1-999999999):");    
            scanf("%d", &codigo_barra[i]);
            if (codigo_barra[i]<1 || codigo_barra[i]>999999999){
                printf("Error, codigo de barra fuera del rango.\n");
            }
        } while (codigo_barra[i]<1 || codigo_barra[i]>999999999);
        do {        
            printf("Ingrese el precio:");
            scanf("%f", &precio[i]);  
            if (precio[i]<0 || precio[i]>999999999){
                printf("Error, precio.\n"); 
          }
        } while (precio[i]<0 || precio[i]>999999999);
    }    
    float precio_mayor=precio[0], precio_menor=precio[0];
    int *pM=&codigo_barra[0], *pm=&codigo_barra[0];
    printf("\nCodigo:\t\tPrecio:\n");
    for (int i=0; i<TAM; i++){ 
    printf("%d\t\t%.2f\n", codigo_barra[i],precio[i]);
    if (precio[i]>precio_mayor){
        precio_mayor=precio[i]; 
        pM=&codigo_barra[i];       
    }    
    if (precio[i]<precio_menor){
        precio_menor=precio[i];
        pm=&codigo_barra[i];
    }
    }
    
    printf("\nPrecio mayor[%d]:%.2f\n", *pM, precio_mayor);
    printf("Precio menor[%d]:%.2f\n", *pm, precio_menor);
    printf("\n");
    
    return 0;
}


