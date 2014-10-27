#include "PortaAviao.h"

PortaAviao::mensagem = "Marinha do Brasil";

PortaAviao::PortaAviao() {
}

PortaAviao::PortaAviao(const PortaAviao& orig) {
}

PortaAviao::~PortaAviao() {
}

void setqtdAviao(int qtdAviao){
    this->qtdAviao = qtdAviao;
}

int getqtdAviao(){
    return qtdAviao;    
}


const void setpistapartida(int pistapartida){
    this->pistapartida = 2;
}
int getpistapartida(){
    return pistapartida;
}
const void setpistachegada(int pistachegada){
    this->pistachegada;
}
int getpistachegada(){
    return pistachegada;
}

const void setpais(char pais[30]){
    cout<<"Insira o Pais de Origem da embarcacao\n";
    this->pais = pais;
}
char getpais(){
    return pais;
}
static Data chegada(Data chegada){
    cout<<"Insira a data em que o aviao foi adicionado a frota";
    this->chegada = chegada;
}

Data getchegada(){
    return chegada;
}