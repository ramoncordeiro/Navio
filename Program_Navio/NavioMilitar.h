
#ifndef NAVIOMILITAR_H
#define	NAVIOMILITAR_H

#include<iostream>
using namespace std;
#include <vector>
using std::vector;
#include <string>
using std::string;

#include "Data.h"
#include "Tripulantes.h"
#include "Armamento.h"

class NavioMilitar {
    // ANALISAR ESSE TRECHO PARA VER SE ESTÁ CORRETO
    friend ostream &operator<<( ostream &, const Navio &); //Inserido Branch Edicao.
    friend istream &operator<< ( istream &, const Navio & ); //Inserido Branch Edicao.
    
public:
    // VERIFICAR TALVEZ O CONSTRUTOR COM DATAS SEJA NA CLASSE NAVIO
    NavioMilitar();
    NavioMilitar(const NavioMilitar &);
    NavioMilitar(string nome, const Data & = Data(4,6,1942));
    virtual ~NavioMilitar();
    
    //FUNÇÕES DA CLASSE NAVIO
    // ANALISAR ESSAS FUNÇÕES, POSSIVELMENTE ESTÃO ERRADAS.
    void horasNavegacao();
    
    void batalhas()const;
    
    void localizacao(); //Funcao exemplo. Nao sei como implementar.
    
    //ANALISAR SE ESSAS FUNÇÕES CONTINUARÃO.
    //Metodos inseridos para exemplificar sobrecarga. Esses metodos estão na versão Branch: Edição
    Navio::Navio();//construtor para tripulantes
    Navio( int tripu);
    Navio operator =(Navio nv);
    void print();
    
    
    
private:
    static int frota;
    
    int Local_Lat;
    int Local_Long;
    int Estado; // 0 - Não alerta , 1 - alerta
   
    vector<string> batalha;
    
    int num_tripulantes; //Add para fazer versão o Branch Edicao
                         //Esta ultima variavel foi inserida para exemplificar sobrecarga
};

#endif	/* NAVIOMILITAR_H */

