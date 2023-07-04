#include <stdio.h>
#define MAXWORDS 20 /* Máxima cantidad de palabras que puede tener el input*/
#define IN 1
#define OUT 0

/* histogram of length of words in its input */
int main()
{
    int c, i, j, nlet, state, nw;
    int low[MAXWORDS]; /* Arreglo de Length Of Words (lof) */
    state = OUT; /* Inicializamos el estado de lectura del input cómo fuera de palabra */
    nlet = 0; /* variable para contabilizar número de letras (nlet) */
    nw = 0; /* variable Number of Word (nw) para moverme en el arreglo */
    for (i = 0; i < MAXWORDS; ++i)
        low[i] = 0;

    while ((c = getchar()) != EOF){

        if (state == IN){
            if (c == ' ' || c == '\n' || c == '\t'){
                state = OUT;
                low[nw] = nlet;
                nlet = 0;
                ++nw;
            }
            else {
            ++nlet;}
        }
        else if (state == OUT){
            if (c == ' ' || c == '\n' || c == '\t'){

            }
            else if (state == OUT){
            state = IN;
            ++nlet;}
            }
    }
       printf("histogram:\n");
       j = 0; /* variable para comparar con el valor numerico del elemento i del array */
    for (i = 0; i < MAXWORDS; ++i){
        for (j = 1; j <= low[i]; ++j){
            if (low[i]>0){
                printf ("|");
                }
            else;
            }
        printf ("\n");
        }

  return 0;
}

