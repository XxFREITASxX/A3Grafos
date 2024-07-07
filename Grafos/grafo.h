#include <iostream>

struct Vertice{

    int id;
    int duracao;
    string nome;
    string informacao; 
    Aresta* arestas; // Ponteiro que aponta para o primeiro da lista de arestas
    Vertice* prox; // Ponteiro responsavel pelo encadeamento dos nodos

    Vertice(int id, int duracao, const string& nome, const string& informacao) 
    : id{id}, duracao{duracao}, nome{nome}, informacao{informacao}, prox{nullptr} {}; // Construtor 
}

struct Aresta{
    
    int vertice;
    Aresta* prox;  // Ponteiro responsavel pelo encadeamento das arestas
}

class Grafo{

    private:

    int vertices;
    int arestas;
    Vertice* listaAdj; // Eh o ponteiro que aponta para o primeiro da lista, marca o inicio dela

    public:

    Grafo() : listaAdj{nullptr}, vertices{0}, arestas{0} {}; // Inicializando os contadores com 0 no construtor
    void consultarVertice();
    void adicionarVertice(int duracao, string nome, string informacao);
    void removerVertice(int id);
    void adicionarAresta(int vertice);
    void removerAresta();
    void imprimir();
    void retornarGrau();
    int grauMinimo();
    int grauMaximo();

}