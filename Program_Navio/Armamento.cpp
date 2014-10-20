

#include<iostream>
#include <string>

#include "Armamento.h"
int Armamento::quantidade =0;
Armamento::Armamento()
:tipo(" ") {
    cout<<"Armamento inserido com sucesso";
    quantidade++;
}

Armamento::Armamento(const Armamento& orig) {
}
Armamento::Armamento(const string tipo, const int quantidade)
:tipo(" "){
    cout<<"Armamento inserido com sucesso";
    quantidade++;
}
Armamento::~Armamento() {
}

void Armamento::setTipo(string tip){
    tipo = tip;
}
int Armamento::getTipo(){
    return tipo;
}

void Armamento::setQuantidade_arma(int quant) {
    quantidade = quant;
}

int Armamento::getQuantidade_arma() {
    return quantidade;
}
