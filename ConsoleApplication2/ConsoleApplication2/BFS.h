#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include "pch.h"
#include <iostream>
#include <string>
#include "NO.h"
#include <queue>

enum COR { BRANCO, CINZA, PRETO };

void BFS(NO *Ladj[], int vertice, int numVertices);
void imprimeVetor(int *v, int n);
void imprimeVetorCores(COR *v, int n);
