#include <iostream>
using namespace std;

class Lista {
    int tamMax;
    int tamAtual;
    int *dados;
public:
    Lista(int tamanho);
    bool vazia(); // verifica se a lista está vazia
    bool cheia(); // verifica se a lista está cheia
    int tamLista(); // retorna o tamanho da lista
    int obtemElemento(int pos); // imprime o elemento de uma determinada posição
    void modElemento(int pos, int elemento); // modifica e exibe um elemento da lista
    bool adiciona(int pos, int elemento); // adiciona um elemento em uma posição determinada e retorna true para adição bem sucedida e false para má sucedida
    bool remove(int pos); // remove o elemento de uma posição determinada e retorna true para remoção bem sucedida e false para má sucedida
};