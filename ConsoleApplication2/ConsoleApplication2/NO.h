#pragma once
#include "pch.h"
#include <iostream>
#include <string>


typedef struct NO {
	int valor;
	NO * prox;
}NO;


void criar(NO* listaADJ[], int nVertices);
void inserir(NO *Ladj[], int vert, int valorV);
void exibe(NO *Ladj[], int nVertices);


