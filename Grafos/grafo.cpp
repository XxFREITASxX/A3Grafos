#include <iostream>

void Grafo::consultarVertice(){

}

// void GrafoAtividade::cadastrarAtividade(string nome, int duracao) {
//  Atividade* novaAtividade = new Atividade(nome, this->proximoId, duracao);
//  this->listaAdjacencia.push_back(vector<Atividade*>{novaAtividade}); 
//  this->proximoId++;

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

void Grafo::adicionarAresta(int vertice1, int vertice2){

    Vertice* temp = listaAdj;

    while(temp != nullptr && temp->id != vertice1){
        temp = temp->prox;
    }

    temp;
    
    Aresta* novaAresta = new Aresta(vertice);

    if(arestas == nullptr){
        arestas = novaAresta;
    } else {
        Aresta* temp = arestas;
        while(temp->prox != nullptr){
            temp = temp->prox;
        }
        temp->prox = novaAresta;
    }

}

void Grafo::removerAresta(){

}

void Grafo::imprimir(){

}

void Grafo::retornarGrau(){

}

int Grafo::grauMaximo(){

}

int Grafo::grauMinimo(){
    
}