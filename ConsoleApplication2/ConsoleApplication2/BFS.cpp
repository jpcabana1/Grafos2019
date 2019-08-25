#include "pch.h"
#include "BFS.h"


using namespace std;

void BFS(NO *Ladj[], int vertice, int numVertices) {
	

	queue<int> q;
	COR *vetorCor;
	int ultimoFila, *d, *ante;
	NO *aux;

	vetorCor = new COR[numVertices];
	d = new int[numVertices];
	ante = new int[numVertices];;
	for (int i = 0; i < numVertices; i++) {
		vetorCor[i] = BRANCO;
		d[i] = 0;
		ante[i] = 0;
	}

	vetorCor[vertice] = CINZA;
	d[0] = 0;
	ante[0] = -1;

	q.push(vertice);

	while (!(q.empty())) {
		ultimoFila = q.front();
		q.pop();
		aux = Ladj[ultimoFila];
		while (aux != NULL) {
			if (vetorCor[aux->valor] == BRANCO) {
				vetorCor[aux->valor] = CINZA;
				q.push(aux->valor);
				d[aux->valor] = d[ultimoFila] + 1;
				ante[aux->valor] = ultimoFila;
			}
			vetorCor[ultimoFila] = PRETO;
			aux = aux->prox;
		}
	}

	printf("\nVetor distancia:\n\n");
	imprimeVetor(d, numVertices);
	printf("\nVetor anterior\n\n");
	imprimeVetor(ante, numVertices);
	printf("\nVetor cor\n\n");
	imprimeVetorCores(vetorCor, numVertices);
	printf("\n\n");
}


	void imprimeVetor(int *v, int n) {
		for (int i = 0; i < n; i++) {
			printf("%d ", v[i]);
		}
	}


	void imprimeVetorCores(COR *v, int n) {
		for (int i = 0; i < n; i++) {
			printf("%d ", v[i]);
		}
	}


	/*
	BFS (grafo G, vértice s)

   para cada vértice u
      cor[u] = BRANCO;

   cor[s] = CINZA;
   Enfileira(Q, s);

   While ( ! EstahVazia(Q) )
      u = Desenfileira(Q);
      
      para cada v na lista Adj[u]
         if (cor[v] == BRANCO)
             cor[v] = CINZA;
             Enfileira (v, Q);
   
      cor[u] = PRETO;
	  */
