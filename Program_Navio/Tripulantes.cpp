

#include <string>

#include "Tripulantes.h"

int Tripulantes::qtd_tripulantes = 0;
Tripulantes::Tripulantes() 
   :id(0),nome_t(" "),cargo(" "){
    cout<<"inserido novo tripulante";
    qtd_tripulantes++;
    }

Tripulantes::Tripulantes(const Tripulantes& orig) {
}

Tripulantes::Tripulantes(int Mat,const string nome ,const string funcao)
:id(Mat),nome_t(nome),cargo(funcao){
    cout<<"inserido novo tripulante";
    qtd_tripulantes++;
}

Tripulantes::~Tripulantes() {
}

