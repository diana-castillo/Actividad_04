#include <stdio.h>

void capturar_enteros(){
    int enteros[5];
    float suma = 0;

    for(size_t i=0; i<5; i++)
        scanf("%i", &enteros[i]);

    for(size_t i=0; i<5; i++)
        printf("%i\n", enteros[i]);

    for(size_t i=0; i<5; i++)
        suma += enteros[i];

    printf("\nSuma: %.f", suma);
    printf("\nPromedio: %.2f\n", suma/5.0);
}

int main(){
    char op;
    
    do{
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personaje\n");
        printf("4) Mostrar personajes\n");
        printf("0) Salir\n");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            capturar_enteros();
            break;

        case '2':
        
            break;
        case '3':

            break;

        case '4':

            break;

        default:
            break;
        }

        fflush(stdin);
    }while (op != '0');

    return 0;
}