#include "Lista.h"

Lista::Lista(int tamanho) {
    this->tamMax = tamanho;
    this->tamAtual = 0;
    this->dados = new int[tamMax];
}
    
bool Lista::vazia() {
    if (tamAtual == 0) return true;
    else return false;
}

bool Lista::cheia() {
    if (tamAtual == tamMax) return true;
    else return false;
}

int Lista::tamLista() {
    return tamAtual;
}

int Lista::obtemElemento(int pos) {
    if (pos > tamAtual || pos < 1) cout << "Posição inválida" << endl;
    else return dados[pos-1];
    return -1;
}

void Lista::modElemento(int pos, int elemento) {
    if (pos > tamAtual+1 || pos < 1) cout << "Posição inválida" << endl;
    else dados[pos-1] = elemento; // optei por permitir que um elemento pudesse ser inserido na posição tamAtual+1 com essa função
}

bool Lista::adiciona(int pos, int elemento) {
    if (cheia() || pos > tamAtual+1 || pos < 1) return false;

    for (int i = tamAtual; i >= pos; i--) {
        dados[i] = dados[i-1];
    }

    dados[pos-1] = elemento;
    tamAtual++;
    return true;
}

bool Lista::remove(int pos) {
    if (vazia() || pos > tamAtual || pos < 1) return false;

    for (int i = pos-1; i < tamAtual-1; i++) {
        dados[i] = dados[i+1];
    }

    tamAtual--;
    return true;
}