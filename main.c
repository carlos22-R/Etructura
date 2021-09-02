
#include <stdio.h>
#include <stdlib.h>
#include "headerfuncion.h"
int main(int argc, char** argv) {
    int size;
    int array[]={4,2,3,1};
    float arrayf[]={1.3,2.3,3.2,4.2};
    double arrayd[]={1.3,2.3,3.2,4.2};
    char arrayc[]={'c','d','a','b','A'};
    size=lenght(array);
    Ordenar(arrayc,5);
    Mostrar(arrayc,5);
    return (EXIT_SUCCESS);
}

