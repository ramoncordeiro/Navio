#include "PortaAviao.h"

PortaAviao::mensagem = "Marinha do Brasil";



PortaAviao(int Estado,string batalha,int qtdAviao,int pistachegada, int pistapartida,char pais){
    NavioMilitar(Estado,batalha);
    setqtdAviao(qtdAviao);
    setpais(pais);
    setchegada(chegada);
        
}
PortaAviao::PortaAviao(const PortaAviao &Paviao) {
    Estado(Paviao.Estado);
    batalha(Paviao.batalha);
    qtdAviao(Paviao.qtdAviao);
    pistachegada(Paviao.pistachegada);
    pistapartida(PAviao.pistapartida);
    pais(Paviao.pais);
}

PortaAviao::~PortaAviao() {
    delete qtdAviao;
    delete pistachegada;
    delete pistapartida;
    delete pais;
}

void setqtdAviao(int qtdAviao){
    cout<<"inserindo novo aviao\n";
    this->qtdAviao = qtdAviao;
}

int getqtdAviao(){
    return qtdAviao;    
}


PortaAviao::setpistapartida(int pistapartida){
    this->pistapartida = 2;
}
PortaAviao::getpistapartida(){
    return pistapartida;
}
PortaAviao::setpistachegada(int pistachegada){
    this->pistachegada =1;
}
PortaAviao::getpistachegada(){
    return pistachegada;
}

PortaAviao::setpais(char pais[30]){
    cout<<"Insira o Pais de Origem da embarcacao\n";
    this->pais = pais;
}
PortaAviao::getpais(){
    return pais;
}
PortaAviao::setchegada(Data chegada){
    cout<<"Insira a data em que o aviao foi adicionado a frota";
    this->chegada = chegada;
}

PortaAviao::getchegada(){
    return chegada;
}