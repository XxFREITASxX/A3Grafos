#ifndef GRAFO_H
#define GRAFO_H

#include "vertice.h"

class Grafo{

    private:

    int vertices;
    int arestas;
    Vertice* listaAdj; // Eh o ponteiro que aponta para o primeiro da lista, marca o inicio dela

    public:

    Grafo() : listaAdj{nullptr}, vertices{0}, arestas{0} {}; // Inicializando os contadores com 0 no construtor
    // void consultarVertice();
    void adicionarVertice(int duracao, string nome, string informacao);
    void removerVertice(int id);
    // void adicionarAresta(int vertice1, int vertice2);
    // void removerAresta();
    void imprimir();
    // void retornarGrau();
    // int grauMinimo();
    // int grauMaximo();

}

#endif