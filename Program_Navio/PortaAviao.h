/*
 Requisitos funcionais
Todos os atributos e funções membros devem estar relacionados a classe
  

    Pelo menos 4 atributos X
    Pelo menos 4 funções membros sem incluir get e set


Requisitos de implementação

    Todos os atributos devem ser inicializados. Fez validação de dados
    Três construtores, incluindo um construtor de cópia e construtor com parâmetros defaults. Verifica alocação dentro do construtor de cópia.
    Deve ter um atributo string
    Um atributo static. Correta modelagem dos statics?
    Um atributo const static
    Dois métodos constantes (não pode ser get)
    Um array
    Uma função inline (não pode ser get ou set)
    Método com passagem por referência usando ponteiro
    Método static – deve ser chamado no main
    Composição com a classe Data. Fez uso do objeto criado?
    O que é const deve ser const.


Terceira Atividade

Alocação dinâmica de memória. A memória é desalocada?
fried Operator<<
Operator=
vector push_back
 
 * 
 * 
Para ajudar vocês a cumprirem os requisitos, pois por incrível que pareça apenas parte da turma os fez nos trabalhos passados, defini uma lista de passos a serem cumpridos antes da implementação. 
Os próximos trabalhos só serão avaliados se esses passos forem seguidos (ou seja, serão desconsiderados para a avaliação caso não se cumpra os quatro passos):

    Escrever no readme no GitHub os requisitos do projeto (veja figura no GitHub.png). A medida que forem sendo feitos, marcando o que foi feito: por exemplo, método estático - ok. Caso não haja nada marcado, considerarei que nada foi feito e não preciso avaliar o trabalho.
    No .h , fazer o mesmo que acima, como no caso do Kâe mostrado na figura No h.png, que foi o que mais se aproximou de fazer todos os requisitos. Ir marcando também os requisitos que forem cumpridos. Caso não, o trabalho não é avaliado.
    No .h, escrever um texto de comentário sobre a ideia de como a classe será desenvolvida. O que o Robocop será capaz de fazer? Terá diretivas? Quais? Ou seja, o que classe faz? Que tipo de atributos? De métodos? Quais os atributos static e const static, e suas justificativas? etc
    Por fim, antes de qualquer implementação, escrever no .h todos os métodos e atributos e acima deles comentar detalhadamente seus significados dentro da ideia do projeto.
 
     Requisitos para quarta tarefa: 
        Diagrama de classes (obrigatório salvar também o png do diagrama no gitHub)
        Herança pública
        Construtor de cópia, e sobrecargas dos operadores de atribuição (=) e << (cout << base) para a classe base e derivada
        Usar Protected acessando diretamente os atributos na classe derivada
        Alocação dinâmica de memória na classe base e derivada
        Sobrescrita de método: chamar dentro do método da classe derivada o método correspondente da classe base usando ::
        No main: criar um ponteiro da classe base para alocar memória para a classe derivada e chamar os vários métodos implementados
 
 
 
 */



#ifndef PORTAAVIAO_H
#define	PORTAAVIAO_H
#include "Navio.h"
#include "Data.h"


class PortaAviao {
public:
    PortaAviao();
    PortaAviao(const PortaAviao &);
    virtual ~PortaAviao();

void setqtdAviao(int qtdAviao);
int getqtdAviao();

private:
    int qtdAviao;
    int pistapartida;
    int pistachegada;
    
};

#endif	/* PORTAAVIAO_H */

