#include "lista.h"
#include <cstdlib>
#include <ctime>

int main () {
    setlocale(LC_ALL, "portuguese");

/*
    int tamanhoLista;
    srand(time(NULL));
    tamanhoLista = rand()%100+1; // +1 garante pelo menos 1 espa�o na lista

    cout << "Gerando lista..." << endl;
    Lista minhaLista(tamanhoLista);
*/

/*  TESTE 1
    Testa a fun��o vazia()
    Preenche a lista com valores aleat�rios (0-9) utilizando adiciona()
    recebe e exibe o valor armazenado na posi��o x usando obtemElemento()
    Testa a fun��o cheia()
*/

/*
    if(minhaLista.vazia()) {
        cout << "A lista foi inicializada com " << tamanhoLista << " espa�os e se encontra vazia." << endl;
    } else {
        cout << "Lista n�o gerada corretamente!" << endl;
    }

    cout << "Preenchendo lista..." << endl;
    for(int i = 0; i < tamanhoLista; i++) {
        minhaLista.adiciona(i+1, rand()%10);
    }

    if(minhaLista.cheia()) {
        cout << "Preenchimento conclu�do com sucesso!" << endl;
    } else {
        cout << "Erro no preenchimento da lista!" << endl;
    }

    int posElem = rand()%tamanhoLista+1;
    cout << "O elemento na posi��o " << posElem << " �: " << minhaLista.obtemElemento(posElem) << endl;

    cout << "TESTE CONCLU�DO!\n" << endl;
    cout << "Encerrando...";
*/

/* TESTE 2
    Preenche parcialmente uma quantidade x de espa�os da lista
    Retorna o tamanho atual da lista usando tamLista()
    Modifica um elemento x usando modElemento()
    Remove um elemento x usando remove()
*/

/*
    cout << "O tamanho da lista �: " << tamanhoLista << endl;

    cout << "Preenchendo lista..." << endl;
    for(int i = 0; i < rand()%tamanhoLista+1; i++) {
        minhaLista.adiciona(i+1, rand()%10);
    }

    cout << "A lista gerada possui " << minhaLista.tamLista() << " espa�os preenchidos" << endl;

    int posMod = rand()%minhaLista.tamLista()+1;
    cout << "O elemento na posi��o " << posMod << " �: " << minhaLista.obtemElemento(posMod) << endl;
    cout << "Modificando elemento..." << endl;
    minhaLista.modElemento(posMod, rand()%10);
    cout << "O novo elemento na posi��o �: " << minhaLista.obtemElemento(posMod) << endl;

    int posRem = rand()%minhaLista.tamLista()+1;
    cout << "Na posi��o " << posRem << " se encontra o elemento: " << minhaLista.obtemElemento(posRem) << "." << endl;
    cout << "Removendo elemento..." << endl;
    minhaLista.remove(posRem);
    if (posRem > minhaLista.tamLista()) {
        cout << "O elemento era o �ltimo da lista e agora a posi��o se encontra vazia." << endl;
    } else {
        cout << "Elemento removido com sucesso! Nessa mesma posi��o agora se encontra o elemento: " << minhaLista.obtemElemento(posRem) << "." << endl;
    }
*/

/* TESTE 3
    Cronometra a cria��o e preenchimento de uma lista com 50000 inteiros
*/

/*
    Lista testeTempo(50000);
    srand(time(NULL));
    clock_t cronometro;

    cronometro = clock(); // In�cio da contagem
    for (int i = 0; i < 50000; i++) {
        testeTempo.adiciona(i, rand()%100+1);
    }
    cronometro = clock() - cronometro; // Fim da contagem
    cout << "A lista sequ�ncial foi criada e preenchida em: " << (double)cronometro/CLOCKS_PER_SEC << " segundos." << endl;
*/

    return 0;
}