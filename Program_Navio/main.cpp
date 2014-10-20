#include <cstdlib>
#include<iostream>
using namespace std;

#include "Navio.h"
#include "Data.h"
#include "Armamento.h"
#include "Tripulantes.h"
#include <vector>

int main(int argc, char** argv) {
    vector<int> v1; //para exemplo push_back
    
    
    cout <<"Inicio do Programa"<<"\n";
    //As duas primeiras linhas abaixo, são modificações para a versão do Branch: Edição
    Navio *nv0 = new Navio("Guerra 0",Data (12,6,1945)); //Alocando dinamicamente Novo navio
    Navio *nv1 = new Navio("Guerra1",Data(12,6,1945)); //Alocando Dinamicamente Novo Navio.
    Navio::Ano_Fab_frota();
    cout<<'\n';
    Navio::anos_uso();
    cout<<'\n';
    Navio::batalhas();
    cout<<'\n';
    
    Navio::horasNavegacao();
    cout<<'\n';
    Navio nv2(nv1);
    
    //A partir daqui foram inseridos na versão do Branch: Edição
    //Mostra a Sobrecarga dos operadores.
    Navio K(3),J(2),X;
    cout<<"K ="
            K.print();
    cout<<"J ="
            J.print();
    cout<<"X ="
            X.print();
    
   //exemplo vetor push_back
    if (v1.max_size(0))
        v1.push_back(1);
    
   return 0;
    
    
    
}

