
#include "pch.h"
#include "NO.h"


using namespace std;

#define TAM 6

void criar(NO* listaADJ[], int nVertices) {
	NO *aux;
	
	try
	{
		for (int i = 0; i < nVertices; i++){
			listaADJ[i] = NULL;
		}
	}
	catch (const exception&)
	{
		cout << "erro ao criar";
	}
}

void inserir(NO *Ladj[], int vert, int valorV) {

	try
	{
		NO *novo, *aux;
		novo = new NO;
		novo->valor = valorV;
		novo->prox = NULL;

		if (Ladj[vert] == NULL)
			Ladj[vert] = novo;
		else {
			aux = Ladj[vert];

			while (aux->prox != NULL) {
				aux = aux->prox;
			}
			aux->prox = novo;
		}
	}
	catch (const exception&)
	{
		cout << "erro ao inserir";
	}
}

void exibe(NO *Ladj[], int nVertices) {
	NO *aux;
	cout << "Lista de adjacencia\n";
	for (int i = 0; i < nVertices; i++) {
		aux = Ladj[i];
		//cout << to_string(i + 1) + ": ";
		while (aux != NULL) {
			cout << to_string(aux->valor) + " ";
			aux = aux->prox;
		}
		cout << endl;
	}
}


int ler_grafo(const char caminho[100], NO*Ladj[]) {
	FILE* arquivo;
	int v, sucessor;
	int numVertices = 0;
	arquivo = fopen(caminho, "r");

	if (arquivo == NULL) {
		printf("Erro: nao foi possivel abrir o arquivo.\n");
	}
	else {
		//le a primeira linha		
		fscanf(arquivo, "%d", &numVertices);

		//le cada uma das demais linhas
		for (v = 0; v < numVertices; v++) {
			fscanf(arquivo, "%d", &sucessor);

			while (sucessor != -1) {
				inserir(Ladj, v, sucessor);
				fscanf(arquivo, "%d", &sucessor);
			}
		}

		fclose(arquivo);
		return numVertices;
	}

}