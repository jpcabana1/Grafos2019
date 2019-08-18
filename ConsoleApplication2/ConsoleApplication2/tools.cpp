#include <iostream>
#include <string>
#include "pch.h"
#include "NO.h"
#include "Matriz.h"
#include "tools.h"

#define TAM 6

using namespace std;

void converteListaPraMatriz(NO *Ladj[], int *mat[6],  int *Conv[6])
{
	NO *aux;
	int i;
	
	aux = Ladj[0];
	if (aux == NULL)
		return;
	else
	{
		i = 0;
		while (i < TAM) {
			while (aux != NULL)
			{
				insereMat(Conv, i, aux->valor);
				aux = aux->prox;
			}
			i++;
			aux = Ladj[i];
		}
	}
	
}

void converteMatrizPraLista(NO *Ladj[], int *mat[6], NO *Conv[])
{
	for (int i = 0; i < TAM; i++) {
		for (int j = 0; j < TAM; j++)
		{
			if (mat[i][j] == 1)
				inserir(Conv, i, j+1);
		}
	}
}
