//ejer 1 Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais* pais, int recuperados)
{
    pais->recuperados += recuperados;
}
/////////////////////////////////////////////////////
//ejer 2 Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro  y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU


#include <stdio.h>
#include <stdlib.h>

void invertirCadena(char cadena[]);
int main()
{
    char cadena[20];
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena);
    invertirCadena(cadena);
    printf("La cadena invertida es: %s", cadena);
    return 0;
}

void invertirCadena(char cadena[])
{
    int i, j;
    char aux;
    for(i=0; cadena[i]!='\0'; i++);
    i--;
    for(j=0; j<i; j++, i--)
    {
        aux=cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=aux;
    }
}
/////////////////////////////////
//ejer 3 Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro  y su responsabilidad es ordenar los caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
void ordenarCaracteres(char *cadena){
    int i,j;
    char aux;
    for(i=0;i<strlen(cadena);i++){
        for(j=i+1;j<strlen(cadena);j++){
            if(cadena[i]>cadena[j]){
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }
}
