
#include <iostream>
using namespace std;
using std::cout;
#include<stdio.h>
#include<stdlib.h>

#include "Navio.h"
#include "Data.h"
#include "NavioMilitar.h"


// -------------------------------- FALTA VALIDAR OS DADOS DENTRO DOS CONSTRUTORES ----------------
// ---------------------------------- FAZER COPIAS DOS CONSTRUTORES DO NAVIOMILITAR.CPP  -----------
int Navio::frota =0;
Navio::Navio(string nome,int qtdCOmbustivel,Data FabFrota,int horasNavegadas,const static pais){
    this->nome = nome;
    this ->horasNavegadas = horasNavegadas;
    this->qtdCombustivel = qtdCombustivel;
    this-> FabFrota = FabFrota;
        
    frota ++; 
}


    
//Construtor de Cópias implementado com base nas referencias do cpluplus.com
Navio::Navio(const Navio& novo) {
    nome(novo.nome);
    qtdCombustivel(novo.qtdCombustivel);
    horasNavegadas(novo.horasNavegadas);
    FabFrota(novo.FabFrota);
    atual(novo.atual);
    cout<<"COnstrutor de Cópia Inicializado com Sucesso"<<endl;
    
    frota ++;
}
//Construtor com parametros Default.
Navio::Navio(string nome)
{
    setNome("a");
    setCombustivel("100");
    setdataFabFrota(1,1,1900);
    cout<<"construtor Default Inicializado com Sucesso"<<endl;
    
    frota++;
}
//construtor vazio
Navio::Navio()
{
    setNome("");
    setCombustivel("");
    setdataFabFrota(1,1,0);
    cout<<"construtor Vazio Inicializado com Sucesso"<<endl;
    
    frota++;
}

Navio::~Navio() {
    delete nome;
    delete horasNavegadas;
    delete frota;
    delete FabFrota;
    delete qtdCombustivel;
    delete atual;
    delete [] tripulacao;
}


// ------------------------------------- FUNÇÕES DA CLASSE --------------------------

void Navio::setNome(string nome){
        cout<<"Por favor insira o nome da embarcação"<<endl;
        this->nome = nome;
        
    }
    string Navio::getNome(){
        return nome;
    }
    
       
    void Navio::setCombustivel(int qtdCombustivel){
        this->qtdCombustivel = 100; // Nessa aplicação cada tanque possui 100 litros de capacidade.
    }
    int
int Navio::getCombustivel() {
        return qtdCombustivel;
}


void Navio::anosemUso() const {
    cout<< "Este navio esteve em uso",(atual-FabFrota).print();
}

void Navio::qtdCombustivel(){
    cout<<"A quantidade de combustivel e"<<'\n'<<qtdCombustivel<<endl;
    
}

 void horasNavegacao(){
     cout<<"A quantidade de horas navegadas e "<<horasNavagadas<<endl;
}

void Navio::setdataFabFrota(Data FabFrota){ 
    cout<<"Insira a data em que o Navio foi fabricado (DD/MM/AA)"<<endl;
    this->FabFrota = FabFrota;
}
Navio::getdataFabFrota(){
        return FabFrota;
    }

Navio::setPais(const static string pais){
    this->pais = "Brasil";
}

string tripulacao (vector tripulacao){
    Tripulantes Trip = new Tripulantes();
    int i;
    for(i=0;i<tripulacao.size();i++){
        tripulacao[i] = Trip.setNome();
    }
    
}

