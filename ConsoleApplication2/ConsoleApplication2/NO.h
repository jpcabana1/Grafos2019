#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include "pch.h"
#include <iostream>
#include <string>


typedef struct NO {
	int valor;
	NO * prox;
}NO;


void criar(NO* listaADJ[], int nVertices);
int ler_grafo(const char caminho[100], NO*Ladj[]);
void inserir(NO *Ladj[], int vert, int valorV);
void exibe(NO *Ladj[], int nVertices);


