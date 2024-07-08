#include <iostream>

/**
void Grafo::consultarVertice(){

}
*/

void Grafo::adicionarVertice(int duracao, const string& nome, const string& informacao){

    Vertice* novoVertice = new Vertice(this->vertices, duracao, nome, informacao);
    
    if(listaAdj == nullptr){
        listaAdj = novoVertice;
    } else {
        Vertice* temp = listaAdj; 
        while(temp->prox != nullptr){
            temp = temp->prox;
        }
        temp->prox = novoVertice;
    }
    this->vertices++;
}

void Grafo::removerVertice(){

    if(listaAdj == nullptr){                    // Verifica a lista para ver se está vazia
        cout << "Lista vazia. Nenhum vértice encontrado." << endl;
        return;
    }

    Vertice* temp = listaAdj;
    Vertice* anterior = nullptr;
    
    while (temp != nullptr && temp->id != id) {
        anterior = temp;
        temp = temp->prox;
    }

    if (anterior == nullptr) {
        listaAdj = temp->prox;
    } else {
        anterior->prox = temp->prox
    }

    delete temp;

}

void Grafo::imprimir(){
    if (listaAdj == nullptr) {
        cout << "Grafo vazio ou não encontrado." << endl;
        return;
    }

    Vertice* temp = listaAdj;
    while (temp != nullptr) {
        cout << "Vértice " << temp->id << ":" << endl;
    
        Aresta* tempAresta = temp->arestas;

        while (tempArestas != nullptr) {
            cout << "\nArestas: " << tempArestas->vertice << endl;
            tempArestas = tempAresta->prox;
        }
    }
}
/*
void Grafo::retornarGrau(int id){
    if (listaAdj == nullptr) {
        cout << "Nenhum vértice foi encontrado." << endl;
        return;
    }

    Vertice* temp = listaAdj;
    while (temp != nullptr && temp->id != id) {
        temp = temp->prox;
    }

    if (temp == nullptr) {
        cout << "Vértice não encontrado." << endl;
    } else {

        int grau = 0;

        Aresta* tempAresta = temp->arestas;
        while (tempAresta != nullptr) {
            grau++;
            tmepAresta = tempAresta->prox;
        }
    }
}

int Grafo::grauMaximo(){

}

int Grafo::grauMinimo(){
    
}

*/
