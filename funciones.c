
#include <stdio.h>
#include "headerfuncion.h"

int MostrarI(int *vector, size_t tamano) {
    int i;
    if (tamano > 0) {
        for (i = 0; i < tamano; i++) {
            if (i == 0) {
                printf("[%i", vector[i]);

            } else if (i == (tamano - 1)) {
                printf(",%i]", vector[i]);
            } else {
                printf(",%i", vector[i]);
            }
        }
        return 1;
    } else {
        return 0;
    }

}

int MostrarD(double *vector, size_t tamano) {
    int i;
    if (tamano > 0) {
        for (i = 0; i < tamano; i++) {
            if (i == 0) {
                printf("[%.2lf", vector[i]);

            } else if (i == (tamano - 1)) {
                printf(",%.2lf]", vector[i]);
            } else {
                printf(",%.2lf", vector[i]);
            }

        }
        return 1;

    } else {
        return 0;
    }


}

int MostrarC(char *vector, size_t tamano) {
    int i;
    if (tamano > 0) {
        for (i = 0; i < tamano; i++) {
            if (i == 0) {
                printf("[%c", vector[i]);

            } else if (i == (tamano - 1)) {
                printf(",%c]", vector[i]);
            } else {
                printf(",%c", vector[i]);
            }

        }
        return 1;


    } else {
        return 0;
    }

}

int MostrarF(float *vector, size_t tamano) {
    int i;
    if (tamano > 0) {
        for (i = 0; i < tamano; i++) {
            if (i == 0) {
                printf("[%.2f", vector[i]);

            } else if (i == (tamano - 1)) {
                printf(",%.2f]", vector[i]);
            } else {
                printf(",%.2f", vector[i]);
            }
        }

        return 1;
    } else {
        return 0;
    }

}
//ordenar

int OrdenI(int *vector, size_t tamano) {
    if(tamano>0){
        int i, j, aux;
    for (i = 0; i < tamano; i++) {
        for (j = 0; j < tamano; j++) {
            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }

        }


    }

    return 1;
    }else{
        return 0;
    }
    
}

int OrdenD(double *vector, size_t tamano) {
    if (tamano>0) {
        int i, j, aux;
    for (i = 0; i < tamano; i++) {
        for (j = 0; j < tamano; j++) {
            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }

        }


    }

    return 1;


    }else{
        return 0;
    }

    }

int OrdenC(char *vector, size_t tamano) {
    if (tamano > 0) {
        int i, j, aux;
        for (i = 0; i < tamano; i++) {
            for (j = 0; j < tamano; j++) {
                if (vector[i] < vector[j]) {
                    aux = vector[i];
                    vector[i] = vector[j];
                    vector[j] = aux;
                }

            }


        }

        return 1;
    } else {
        return 0;
    }


}

int OrdenF(float *vector, size_t tamano) {
    if (tamano>0) {
int i, j, aux;
    for (i = 0; i < tamano; i++) {
        for (j = 0; j < tamano; j++) {
            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }

        }


    }

    return 1;
    }else{
        return 0;
    }
}