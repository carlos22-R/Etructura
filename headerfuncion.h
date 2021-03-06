/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   headerfuncion.h
 * Author: carlos
 *
 * Created on 1 de septiembre de 2021, 21:58
 */

#ifndef HEADERFUNCION_H
#define HEADERFUNCION_H
#define lenght(x) (sizeof(x)/sizeof((x)[0]))

#include <stdio.h>

#define Mostrar(vector,tamano) _Generic((vector), \
              int*: MostrarI, \
              double*: MostrarD,  \
              float*: MostrarF, \
              char*: MostrarC \
)(vector,tamano)
//cambio de variable
#define Ordenar(vector,tamano) _Generic((vector), \
              int*: OrdenI, \
              double*: OrdenD,  \
              float*: OrdenF, \
              char*: OrdenC \
)(vector,tamano)
//cambiar dato
#define Dato(vector,tamano,posicion,cambio) _Generic((vector), \
              int*: DatoI, \
              double*: DatoD,  \
              float*: DatoF, \
              char*: DatoC \
)(vector,tamano,posicion,cambio)
//mostrar datos
int MostrarI(int *vector, size_t tamano);
int MostrarD(double *vector, size_t tamano);
int MostrarC(char *vector, size_t tamano);
int MostrarF(float *vector, size_t tamano);
//cambio bariable
int OrdenI(int *vector,size_t tamano);
int OrdenD(double *vector,size_t tamano);
int OrdenC(char *vector,size_t tamano);
int OrdenF(float *vector,size_t tamano);
//cambio 
int DatoI(int *vector ,size_t tamano, size_t posicion,int cambio);
int DatoD(double *vector ,size_t tamano, size_t posicion,double cambio);
int DatoC(char *vector ,size_t tamano, size_t posicion,char cambio);
int DatoF(float *vector ,size_t tamano, size_t posicion, float cambio);

#endif /* HEADERFUNCION_H */

