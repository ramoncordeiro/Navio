#include<iostream>

#include <string>

#include "Tripulantes.h"

int Tripulantes::qtd_tripulantes = 0;
Tripulantes::Tripulantes() 
   :ident(0),nome_t(" "),cargo(" "){
    cout<<"inserido novo tripulante";
    qtd_tripulantes++;
    }

Tripulantes::Tripulantes(const Tripulantes& orig) {
}

Tripulantes::Tripulantes(int Mat,const string nome ,const string funcao)
:ident(Mat),nome_t(nome),cargo(funcao){
    cout<<"inserido novo tripulante";
    qtd_tripulantes++;
}


Tripulantes::~Tripulantes() {
}

void Tripulantes::setNovoTripulante(int ide, string nom, string carg) {
    ident = ide;
    nome_t = nom;
    cargo = carg;
}

int Tripulantes::getNovoTripulante() {
    return ident,nome_t,cargo;
}


void setQtd_tripulantes(int tota_tripu){
    qtd_tripulantes = tota_tripu;
}
int getQtd_tripulantes(){
    return qtd_tripulantes;
}
    

