
/*IDÉIA DA CLASSE PORTAAVIAO: CRIAR UMA CLASSE QUE HERDE DE NAVIO OS ATRIBUTOS
  E, QUE possua suas próprias caracteristicas 
 PortaAviao é um tipo diferenciaod de embarcação que transporta os aviões de um determinado País 
 em Guerra,então esta classe terá essa caracteristica.  */

#ifndef PORTAAVIAO_H
#define	PORTAAVIAO_H
#include "NavioMilitar.h"
#include "Data.h"
#include <string>

class PortaAviao:public NavioMilitar {
public:
    PortaAviao(int Estado,string batalha,int qtdAviao,int pistachegada, int pistapartida,char pais);
    PortaAviao(const PortaAviao &Paviao);
    virtual ~PortaAviao();

void setqtdAviao(int qtdAviao); //X
int getqtdAviao(); //X
const void setpistapartida(int pistapartida);//X
int getpistapartida(); //X
const void setpistachegada(int pistachegada); //X
int getpistachegada(); //X
inline const string mensagem(string *mensagem){this->mensagem = "Marinha"; return mensagem;} //X
const void setpais(char pais[30]); //X
char getpais(); //X
friend static Data setchegada(Data chegada); //X
Data getchegada(); //X
private:
    //As variaveis foram declaradas com base em vídeos sobre esse tipo de embarcação.
    //Alguns modelos possuem 2 pistas de partida ( menores) e 1 de pouso (Maior)
    int qtdAviao;
    const int pistapartida;
    const int pistachegada;
    const static string mensagem; // Mensagem :Marinha
    const char  pais[30]; // Esse atributo mostra o Pais de origem da Embarcacao
    Data chegada; //data em que o aviao chegou na embarcacao.
};

#endif	/* PORTAAVIAO_H */

