#ifndef VERTICE_H
#define VERTICE_H

#include <iostream>

struct Aresta{
    
    int vertice;
    Aresta* prox;  // Ponteiro responsavel pelo encadeamento das arestas
}

class Vertice{
    
    private:

    int id;
    int duracao;
    string nome;
    string informacao; 
    Aresta* arestas; // Ponteiro que aponta para o primeiro da lista de arestas
    Vertice* prox; // Ponteiro responsavel pelo encadeamento dos nodos

    public:

    Vertice(int id, int duracao, const string& nome, const string& informacao) 
    : id{id}, duracao{duracao}, nome{nome}, informacao{informacao}, prox{nullptr} {}; // Construtor 
}

#endif

