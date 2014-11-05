#include "PortaAviao.h"

PortaAviao::mensagem = "Marinha do Brasil";



PortaAviao(string nome,string modelo,int Estado,int Qtd_Combustivel,int Horas_navegadas, Data atual,int qtdAviao,const int pistapartida,const int pistachegada,const static string mensagem, const char pais,Data chegada){
    Navio(nome,modelo,Estado,Qtd_Combustivel,Horas_navegadas,atual);
    setqtdAviao(qtdAviao);
    setpais(pais);
    setchegada(chegada);
    
    
}
PortaAviao::PortaAviao(const PortaAviao &PortaAviaoCopia):Navio(PortaAviaoCopia) {
}

PortaAviao::~PortaAviao(string nome,string modelo,int Estado,int Qtd_Combustivel,int Horas_navegadas, Data atual,int qtdAviao,const int pistapartida,const int pistachegada,const static string mensagem, const char pais,Data chegada) {
    Navio(nome,modelo,Estado,Qtd_Combustivel,Horas_navegadas,atual);
    setqtdAviao(qtdAviao);
    setpais(pais);
    setchegada(chegada);
}

void setqtdAviao(int qtdAviao){
    cout<<"inserindo novo aviao\n";
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
    this->pistachegada =1;
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
friend static Data setchegada(Data chegada){
    cout<<"Insira a data em que o aviao foi adicionado a frota";
    this->chegada = chegada;
}

Data getchegada(){
    return chegada;
}