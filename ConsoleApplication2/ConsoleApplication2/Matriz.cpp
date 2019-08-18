#include "Matriz.h"
#include "pch.h"
#include <string>
#include <iostream>

using namespace std;


void criarMatriz(int *mat[6], int n) {
	for (int i = 0; i < n; i++)
	{
		mat[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = 0;
		}
	}
}

void insereMat(int *m[6], int vertice, int valor) 
{
	if (valor == 0)
	{
		m[vertice][valor] = 1;
		return;
	}
	m[vertice][valor - 1] = 1;	
}

void exibeMatriz(int *m[6], int n)
{
	cout << "Matriz de adjacencia\n";
	cout << "* 1 2 3 4 5 6\n";
	for (int i = 0; i < n; i++) {
		cout << to_string(i+1);
		for (int j = 0; j < n; j++) {
			cout << " " + to_string(m[i][j]);
		}
		cout << endl;
	}
}

