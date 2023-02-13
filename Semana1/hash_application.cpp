#include <iostream>
#include "hash.h" 
using namespace std;
int CasoDeTeste1(){
  /*Teste 1- inserção de elementos: Adicione mais alguns elementos à tabela hash e verifique se eles são impressos corretamente usando o método "print".*/
Hash clientesHash(10);

int ras[9] = {
  12704, 31300, 1234,
  49001, 52202, 65606,
  91234, 12345, 56789
};
string login[9] = {
  "Cassio", "Fagner", "Fabio Santos",
  "Fausto Vera", "Renato Augusto", "Roger Guedes",
  "Yuri Alberto", "Romero", "Paulinho"
};

for (int i = 0; i < 9; i++) {
  Cliente cliente = Cliente(ras[i], login[i]);
  clientesHash.insertItem(cliente);
}

cout << "Imprimindo a tabela hash depois de inserir elementos:" << endl;
clientesHash.print();
  }

  int CasoDeTeste2(){
    /*Teste 2- pesquisa de elementos: Crie um objeto "Cliente" com um RA e um nome de login conhecidos, chame o método "retrieveItem" e verifique se o resultado da pesquisa está correto.*/

Cliente cliente(31300,"");  
bool found = false;
clientesHash.retrieveItem(cliente, found);
if (found) {
  cout << "Achou o cliente: " << cliente.getLogin() << endl;
} else {
  cout << "Não achou o cliente com RA 31300" << endl;
}
int CasoDeTeste3(){
  /*Teste 3- exclusão de elementos: Exclua um elemento da tabela hash e verifique se ele realmente foi excluído ao imprimir a tabela hash novamente. */
Cliente cliente_delete(12704,"");
clientesHash.deleteItem(cliente_delete);
cout << "Imprimindo a tabela hash depois de excluir um elemento:" << endl;
clientesHash.print();
}

int CasoDeTeste4(){
  /*Teste 4- colisão: Adicione elementos à tabela hash que tenham o mesmo RA, o que resultará em uma colisão. Verifique se o tratamento de colisões está funcionando corretamente.*/
  Cliente cliente_colisao1(12345,"Cliente com RA 12345");
Cliente cliente_colisao2(12345,"Outro cliente com RA 12345");
clientesHash.insertItem(cliente_colisao1);
clientesHash.insertItem(cliente_colisao2);
cout << "Imprimindo a tabela hash depois de inserir dois elementos com o mesmo RA:" << endl;
clientesHash.print();
  }
  
int CasoDeTeste5(){
/*Teste 5- dimensionamento: Adicione  elementos à tabela hash e verifique se a tabela hash é redimensionada corretamente quando fica cheia. Verifique também se os elementos continuam acessíveis após o redimensionamento.*/
Hash clientesHash_redimensionamento(3);

int ras_redimensionamento[10] = {
  1, 2, 3,
  4, 5, 6,
  7, 8, 9,
  10
};
string login_redimensionamento[10] = {
  "Cliente 1", "Cliente 2", "Cliente 3",
  "Cliente 4", "Cliente 5", "Cliente 6",
  "Cliente 7", "Cliente 8", "Cliente 9",
  "Cliente 10"
};

for (int i = 0; i < 10; i++) {
  Cliente cliente = Cliente(ras_redimensionamento[i], login_redimensionamento
  }
    
  for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(ras[i], login[i]);
    clientesHash.insertItem(cliente);
  }
  clientesHash.print();  
  cout << "------------------------------" <<  endl;
  
  Cliente cliente(12704,"");  
  bool     found = false;
  clientesHash.retrieveItem(cliente, found);
  cout << cliente.getLogin() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  clientesHash.deleteItem(cliente);
  clientesHash.print();
  cout << "Fim" << endl;  
}