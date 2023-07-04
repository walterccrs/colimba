#include <stdio.h>
#define CHARS 255 /* Cantidad máxima de tipo de caracteres en el input*/

/* histogram of frequencies of different characters in its input */
int main()
{
    int c, i, j;
    int foc[CHARS]; /* Arreglo de Frequency of Characters (foc) */

    for (i = 0; i < CHARS; ++i)
        foc[i] = 0;

    while ((c = getchar()) != EOF){

        for (i = 0; i < CHARS; ++i){
            if (c == i){
                foc[i]= foc[i] + 1;
            }else;
        }
    }

    printf("histogram of frecuencies:\n");
    j = 0; /* variable para comparar con el valor numerico del elemento i del array */
    for (i = 0; i < CHARS; ++i){
        if (foc[i] != 0){
            printf("Char %c: ", i);
        for (j = 1; j <= foc[i]; ++j){
            if (foc[i]>0){
                printf ("|");
                }
            else;
            }
        printf ("\n");
        }else;
    }

  return 0;
}

