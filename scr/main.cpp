#include "lista.h"
#include <cstdlib>
#include <ctime>

int main () {
    setlocale(LC_ALL, "portuguese");

/*
    int tamanhoLista;
    srand(time(NULL));
    tamanhoLista = rand()%100+1; // +1 garante pelo menos 1 espaço na lista

    cout << "Gerando lista..." << endl;
    Lista minhaLista(tamanhoLista);
*/

/*  TESTE 1
    Testa a função vazia()
    Preenche a lista com valores aleatórios (0-9) utilizando adiciona()
    recebe e exibe o valor armazenado na posição x usando obtemElemento()
    Testa a função cheia()
*/

/*
    if(minhaLista.vazia()) {
        cout << "A lista foi inicializada com " << tamanhoLista << " espaços e se encontra vazia." << endl;
    } else {
        cout << "Lista não gerada corretamente!" << endl;
    }

    cout << "Preenchendo lista..." << endl;
    for(int i = 0; i < tamanhoLista; i++) {
        minhaLista.adiciona(i+1, rand()%10);
    }

    if(minhaLista.cheia()) {
        cout << "Preenchimento concluído com sucesso!" << endl;
    } else {
        cout << "Erro no preenchimento da lista!" << endl;
    }

    int posElem = rand()%tamanhoLista+1;
    cout << "O elemento na posição " << posElem << " é: " << minhaLista.obtemElemento(posElem) << endl;

    cout << "TESTE CONCLUÍDO!\n" << endl;
    cout << "Encerrando...";
*/

/* TESTE 2
    Preenche parcialmente uma quantidade x de espaços da lista
    Retorna o tamanho atual da lista usando tamLista()
    Modifica um elemento x usando modElemento()
    Remove um elemento x usando remove()
*/

/*
    cout << "O tamanho da lista é: " << tamanhoLista << endl;

    cout << "Preenchendo lista..." << endl;
    for(int i = 0; i < rand()%tamanhoLista+1; i++) {
        minhaLista.adiciona(i+1, rand()%10);
    }

    cout << "A lista gerada possui " << minhaLista.tamLista() << " espaços preenchidos" << endl;

    int posMod = rand()%minhaLista.tamLista()+1;
    cout << "O elemento na posição " << posMod << " é: " << minhaLista.obtemElemento(posMod) << endl;
    cout << "Modificando elemento..." << endl;
    minhaLista.modElemento(posMod, rand()%10);
    cout << "O novo elemento na posição é: " << minhaLista.obtemElemento(posMod) << endl;

    int posRem = rand()%minhaLista.tamLista()+1;
    cout << "Na posição " << posRem << " se encontra o elemento: " << minhaLista.obtemElemento(posRem) << "." << endl;
    cout << "Removendo elemento..." << endl;
    minhaLista.remove(posRem);
    if (posRem > minhaLista.tamLista()) {
        cout << "O elemento era o último da lista e agora a posição se encontra vazia." << endl;
    } else {
        cout << "Elemento removido com sucesso! Nessa mesma posição agora se encontra o elemento: " << minhaLista.obtemElemento(posRem) << "." << endl;
    }
*/

/* TESTE 3
    Cronometra a criação e preenchimento de uma lista com 50000 inteiros
*/

/*
    Lista testeTempo(50000);
    srand(time(NULL));
    clock_t cronometro;

    cronometro = clock(); // Início da contagem
    for (int i = 0; i < 50000; i++) {
        testeTempo.adiciona(i, rand()%100+1);
    }
    cronometro = clock() - cronometro; // Fim da contagem
    cout << "A lista sequêncial foi criada e preenchida em: " << (double)cronometro/CLOCKS_PER_SEC << " segundos." << endl;
*/

    return 0;
}