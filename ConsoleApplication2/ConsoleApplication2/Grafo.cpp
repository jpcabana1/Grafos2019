#pragma once

// ConsoleApplication2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include "NO.h"
#include "Matriz.h"
#include "tools.h"

#define TAM 6
#define tamMAT 6
using namespace std;


/*
	0 = {2,5}
	1 = {1,2}
	2 = {2,4}
	3 = {3,5,6}
	4 = {2,4}
	5 = {4}
*/

int main()
{

	NO *grafo[TAM], *novoGrafo[TAM];
	int *m[tamMAT], *matConv[tamMAT];
	int numVertices;

	criar(grafo, TAM);
	criar(novoGrafo, TAM);
	criarMatriz(m, tamMAT);
	numVertices = ler_grafo("grafo1.txt",grafo);
	

	cout << endl;
	
	cout << "Grafo:\n";
	exibe(grafo, TAM);
	cout << "\nconvertendo Lista para Matriz\n\n";
	converteListaPraMatriz(grafo, m);
	exibeMatriz(m, tamMAT);
	
	cout << "\nconvertendo Matriz para Lista\n\n";
	converteMatrizPraLista(m, novoGrafo);
	exibe(novoGrafo, TAM);
	
	system("pause");

}



