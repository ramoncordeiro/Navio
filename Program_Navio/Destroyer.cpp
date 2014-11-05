
#include <iostream>
using namespace std;
#include "Destroyer.h"

Destroyer::Destroyer(int Estado,string batalha,int antiMissel,int qtdMisseis) {
    NavioMilitar(Estado,batalha);
    setantiMissel(int antiMissel);
    setqtdMisseis(qtdMisseis);
}

Destroyer::Destroyer(const Destroyer& Destruidor) {
    antiMissel(Destruidor.antiMissel);
    qtdMisseis(Destruidor.qtdMisseis);
}

Destroyer::~Destroyer() {
    delete antiMissel;
    delete qtdMisseis;
}

Destroyer::setantiMissel(int antiMissel){
    this->antiMissel = antiMissel;
}
    Destroyer::getantiMissel(){
        return antiMissel;
    }
    Destroyer::setqtdMisseis(int qtdMisseis)const {
        this->qtdMisseis = 100; // Todo antimissel iniciará com 100 misseis;
    }
    Destroyer::getqtdMisseis(){
        return qtdMisseis;
    }