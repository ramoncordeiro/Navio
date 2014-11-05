#include<iostream>

#include <string>

#include "Tripulantes.h"

int Tripulantes::qtdTripulantes = 0;
Tripulantes::Tripulantes() 
   :ident(0),nomeT(" "),cargo(" "){
    cout<<"inserido novo tripulante";
    qtdTripulantes++;
    }

Tripulantes::Tripulantes(const Tripulantes& T) {
    nomeT(T.nomeT);
    cargo(T.cargo);
    ident(T.ident);
    qtdTripulantes++;
}

Tripulantes::Tripulantes(int Mat,const string nome ,const string funcao)
:ident(Mat),nomeT(nome),cargo(funcao){
    cout<<"inserido novo tripulante";
    qtdTripulantes++;
}

Tripulantes::Tripulantes(string nomeT){
    Tripulantes::setNome(string nomeT);
    qtdTripulantes++;
}


Tripulantes::~Tripulantes() {
}

void Tripulantes::setNovoTripulante(int ide, string nom, string carg) {
    ident = ide;
    nomeT = nom;
    cargo = carg;
}

int Tripulantes::getNovoTripulante() {
    return ident,nomeT,cargo;
}


void setQtd_tripulantes(int totalTripu){
    qtdTripulantes = totalTripu;
}
int getqtdTripulantes(){
    return qtdTripulantes;
}
    
Tripulantes::setNome(string nomeT){
    this->nomeT = nomeT;
}

    Tripulantes::getNome(){
        return nomeT;
    }