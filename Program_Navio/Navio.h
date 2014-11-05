
/*
 Requisitos funcionais
Polimorfismo

1. Duas classes abstratas, sendo que uma classe abstrata herda da outra classe abstrata na hierarquia de classes;
2. Cada classe abstrata deve ter pelo menos um parâmetro, o construtor vazio e o construtor default. Deve ter também um método não virtual, que não pode ser set ou get;
3. Pelo menos três classes concretas na hierarquia de classes;
4. Usar coerção de tipo C++ e não C, ou seja usar o static_cast para fazer o máximo de reutilização de código. 
5. Usar um vector de classes concretas, o dynamic_cast e o typeid como indicado aqui: https://basecamp.com/2595605/projects/7018448/messages/33080741
6. Criar uma função no arquivo do main, que aceita um ponteiro da classe genérica e mostrar o seu uso para as classes concretas;


Importante: Todos os Requisitos abaixo ainda devem ser feitos e serão avaliados



Todos os atributos e funções membros devem estar relacionados a classe
  
7. Pelo menos 4 atributos  X
8. Pelo menos 4 funções membros sem incluir get e set  X

Requisitos de implementação
3. Todos os atributos devem ser inicializados. Fez validação de dados X
4. Três construtores, incluindo um construtor de cópia e construtor com parâmetros defaults. Verifica alocação dentro do construtor de cópia.  X
5. Deve ter um atributo string X
6. Um atributo static. Correta modelagem dos statics?
7. Um atributo const static X
8. Dois métodos constantes (não pode ser get)
9. Um array X
10. Uma função inline (não pode ser get ou set)
11. Método com passagem por referência usando ponteiro X
12. Método static – deve ser chamado no main 
13. Composição com a classe Data. Fez uso do objeto criado? X
14. O que é const deve ser const.   
15. Alocação dinâmica de memória. A memória é desalocada? X
16. friend Operator<< 
17. Operator=
18. vector push_back

Requisitos para as classes adicionais (pelo menos duas)

Operator =
 Alocação dinâmica - se houver vazamento de memória a classe toda é desconsiderada 
Usar o destrutor
Construtor de cópia
Operator << friend
Um const static 







Requisitos herança
Diagrama de classes (obrigatório salvar também o png do diagrama no gitHub) 
Herança pública 
Construtor de cópia, e sobrecargas dos operadores de atribuição (=) e << (cout << base) para a classe base e derivada
Usar Protected acessando diretamente os atributos na classe derivada
Alocação dinâmica de memória na classe base e derivada
Sobrescrita de método: chamar dentro do método da classe derivada o método correspondente da classe base usando ::
No main: criar um ponteiro da classe base para alocar memória para a classe derivada e chamar os vários métodos implementados
  
 
 
 
 */






#ifndef NAVIO_H
#define	NAVIO_H

#include<iostream>
using namespace std;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Data.h"
#include "Tripulantes.h"
#include "Armamento.h"
#include <vector>

// ---------------------------------- DUVIDA ---------------------------------
// VE SE VAI SER NECESSARIO INCLUIR O FRIEND OPERATOR AQUI.

class Navio {
public:
    Navio(string nome,int qtdCOmbustivel,Data FabFrota,int horasNavegadas,Data atual,const static pais);
    Navio(const Navio& novo);
    Navio(string nome); //construtor Default
    Navio(); //construtor vazio
    virtual ~Navio();
    
    
    // ------------------------ FUNCOES-------------------
      //funções de validação e inserção.
    void setNome(string nome);
    string getNome();
    void setCombustivel(int qtdCombustivel);
    int getCombustivel();
    void setdataFabFrota(Data FabFrota);
    Data getdataFabFrota();
    void setPais(const static string pais);
    string getPais();
    
    string tripulacao (vector tripulacao);
    void qtdCombustivel(); // ESSA FUNÇÃO FAZ A MEDIDA DE COMBUSTIVEL APÓS OS USOS.
    const static void AnoFabFrota();
    void anosemUso()const;
    void horasNavegacao;

    
private:
    // ------------------------------- ATENÇÃO -------------------------
    //ANALISAR SE AS VARIAVEIS ESTÃO NOS TIPOS CORRETOS, E CONSEQUENTEMENTE SUAS FUNÇÕES
    //EX : STATIC OU STATIC INT
    //ACHAR UMA VARIAVEL PARAR SER CONST STATIC.
    static int frota;
    string nome;
    int qtdCombustivel;
    Data FabFrota; // Data de Fabricação do Navio.
    static int horasNavegadas; // Quantidade de Horas navegadas até a consulta
    Data atual;
    const static string pais; //mostra o pais de Origem, nesse caso todos serão do Brasil.
    string <vector> tripulacao; //guardará os tripulantes da embarcação.
};

#endif	/* NAVIO_H */

