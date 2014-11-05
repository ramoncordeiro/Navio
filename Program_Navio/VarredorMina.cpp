
#include "VarredorMina.h"

VarredorMina::VarredorMina(int granadas, int qtdRadarMina) {
    NavioMilitar(Estado,batalha);
    setGrananas();
    setqtdRadarMina();
}

VarredorMina::VarredorMina(const VarredorMina &Varredor) {
    granadas(Varredor.granadas);
    qtdRadarMina(Varredor.qtdRadarMina);
}

VarredorMina::~VarredorMina() {
    delete granadas;
    delete qtdRadarMina;
}


VarredorMina::setGrananas(int granadas){
    this->granadas = granadas;
}
VarredorMina::getGranadas(){
        return granadas;
    }

VarredorMina::setqtdRadarMina(int qtdRadarMina){
    this->qtdRadarMina = qtdRadarMina;
    }

VarredorMina::getqtdRadarMina(){
    return qtdRadarMina;
}

