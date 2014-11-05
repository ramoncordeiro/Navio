

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
#include "Navio.h"

class NavioMilitar: public Navio {
    // ANALISAR ESSE TRECHO PARA VER SE ESTÁ CORRETO
    //friend ostream &operator<<( ostream &, const Navio &); //Inserido Branch Edicao.
    //friend istream &operator<< ( istream &, const Navio & ); //Inserido Branch Edicao.
    
public:
    // VERIFICAR TALVEZ O CONSTRUTOR COM DATAS SEJA NA CLASSE NAVIO
    NavioMilitar(string nome,int qtdCOmbustivel,Data FabFrota,int horasNavegadas,Data atual,const static pais,int Estado, string batalha);
    NavioMilitar(const NavioMilitar &NM);
    NavioMilitar(string nome,int qtdCOmbustivel,Data FabFrota,int horasNavegadas,Data atual,const static pais,int Estado, string batalha);
    virtual ~NavioMilitar();
    
    //FUNÇÕES DA CLASSE NAVIO
    
    void setEstado(int Estado);
    int getEstado();
    void batalhas()const;
    
    
    
    
       
    
    
private:
       
    int Estado; // 0 - Não alerta , 1 - alerta
    vector<string> batalha;
        
};

#endif	/* NAVIOMILITAR_H */

