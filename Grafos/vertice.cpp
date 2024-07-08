#include "vertice.h"

//  void Vertice::adicionarAresta(int vertice){
    
//     Aresta* novaAresta = new Aresta(vertice);

//     if(arestas == nullptr){
//         arestas = novaAresta;
//     } else {
//         Aresta* temp = arestas;
//         while(temp->prox != nullptr){
//             temp = temp->prox;
//             if(temp->vertice == vertice){
//                 cout << "Os vertices ja estao relacionados.";
//                 delete novaAresta;
//                 return;
//             }
//         }
//         temp->prox = novaAresta;
//     }
//  }

//  void Vertice::removerAresta(int vertice){

//     if(arestas == nullptr){                    // Verifica a lista para ver se está vazia
//     cout << "Nao ha arestas relacionadas ao vertice." << endl;
//     return;
//     }

//     Aresta* temp = arestas;
//     Aresta* anterior = nullptr;
    
//     while (temp != nullptr && temp->vertice != vertice) {
//         anterior = temp;
//         temp = temp->prox;
//     }

//     if (anterior == nullptr) {
//         arestas = temp->prox;
//     } else {
//         anterior->prox = temp->prox
//     }

//     delete temp;
// }
