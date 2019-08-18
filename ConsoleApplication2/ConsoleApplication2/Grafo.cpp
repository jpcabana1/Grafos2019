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

	criar(grafo, TAM);
	criar(novoGrafo, TAM);
	criarMatriz(m, tamMAT);
	criarMatriz(matConv, tamMAT);

	//1 = { 2,5 }
	inserir(grafo, 0,2);
	inserir(grafo, 0, 5);
	//2 = { 1,2 }
	inserir(grafo, 1, 1);
	inserir(grafo, 1, 2);
	//3 = {2,4}
	inserir(grafo, 2, 2);
	inserir(grafo, 2, 4);
	//4 = {3,5,6}
	inserir(grafo, 3, 3);
	inserir(grafo, 3, 5);
	inserir(grafo, 3, 6);
	//5 = {2,4}
	inserir(grafo, 4, 2);
	inserir(grafo, 4, 4);
	//6 = {4}
	inserir(grafo, 5, 1);
	
	cout << endl;
	//int *m = (int *)malloc(tamMAT * tamMAT * sizeof(int));
	//1 = { 2,5 }
	insereMat(m, 0, 2);
	insereMat(m, 0, 5);
	//2 = { 1,2 }
	insereMat(m, 1, 1);
	insereMat(m, 1, 2);
	//3 = {2,4}
	insereMat(m, 2, 2);
	insereMat(m, 2, 4);
	//4 = {3,5,6}
	insereMat(m, 3, 3);
	insereMat(m, 3, 5);
	insereMat(m, 3, 6);
	//5 = {2,4}
	insereMat(m, 4, 2);
	insereMat(m, 4, 4);
	//6 = {4}
	insereMat(m, 5, 1);

	exibe(grafo, TAM);
	exibeMatriz(m, tamMAT);
	cout << "\nconvertendo Lista para Matriz\n\n";
	converteListaPraMatriz(grafo, m, matConv);
	exibeMatriz(matConv, tamMAT);
	cout << "\nconvertendo Matriz para Lista\n\n";
	converteMatrizPraLista(grafo, matConv, novoGrafo);
	exibe(novoGrafo, TAM);
	system("pause");

}



