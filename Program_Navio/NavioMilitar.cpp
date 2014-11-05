#include <iostream>
using std::cout;

#include "Data.h"
#include "NavioMilitar.h"
#include "Tripulantes.h"
#include <vector>


int Navio::frota =0;
const Data ::FAB = Data(4,4,1942);// Data fabricação.



/*Nova função acrescentada Para a branch Edição. Sobrecarga no Construtor
Navio::Navio(string nm,static string mod,int est, int lat,int longe,int combus,int h_nave, Data t_atual){
    nome = nm;
    modelo = mod;
    Estado = est;
    Local_Lat = lat;
    Local_Long = longe;
    Qtd_Combustivel = combus;
    Horas_navegadas = h_nave;
    atual = t_atual;
} */


// Nova Função adicionada para a branch Edição.

Navio::Navio(){
    num_tripulantes = 0;
        
}

Navio::Navio(int tripu){
    num_tripulantes = tripu;
    }

void Navio::print(){
    cout<<"Numero de tripulantes e: " <<num_tripulantes <<endl;
}
// Nova funcao adicionada na versão Branch: Edição




Navio Navio::operator=(Navio nv){
    Navio aux;
    aux.num_tripulantes = num_tripulantes + Navio.num_tripulantes;
    return aux;
}

    Navio::Navio(Navio nv){
    Navio aux;
    aux.nome = nv.nome;
}

Navio::Navio() 
:nome("Marinha"),modelo("BRA-2Guerra"),Estado(0),
Local_Lat(0),Local_Long(0),Qtd_Combustivel(100),Horas_navegadas(0),atual(30,10,2014)//porcentagem
{
    cout<< "Este Navio participou de uma batalha" <<batalha.size() << '\n';
    frota++;
    Qtd_Combustivel--;
    Horas_navegadas++;
}

Navio::Navio(const Navio &nv) 
:nome(nv.nome),modelo(nv.modelo),Estado(nv.Estado),Local_Lat(nv.Local_Lat),
Local_Long(nv.Local_Long),Qtd_Combustivel(nv.Qtd_Combustivel),Horas_navegadas(0),atual(30,10,2014)
{
    cout<<" Novo navio para a frota\n";
    batalha= nv.batalha;
    cout<< "Este Navio participou de uma batalha" <<batalha.size() << '\n';
    frota++;
    Qtd_Combustivel--;
    Horas_navegadas++;
}

Navio::Navio(string nom,const Data &dat)
:nome(nom),atual(dat)
{
    cout<< "Este Navio participou de uma batalha" <<batalha.size() << '\n';
    frota++;
    Qtd_Combustivel--;
    Horas_navegadas++;
}
Navio::~Navio() {
        }
void Navio::Ano_Fab_frota()
{
    cout<<"O ano de fabricacao deste navio e:",FAB.print();
    cout<<"A frota atualmente contem"<<'\n'<<frota;
}

void Navio::batalhas() const {
    cout << "Total de batalhas\n";
for(int i = 0; i < batalha.size(); i++)
cout << batalha[i] << '\n';
}




void Navio::horasNavegacao()
{
    cout<<"A quantidade de horas navegadas e"<<'\n'<<Horas_navegadas<< endl;
}

void Navio::localizacao(){ //FUNCAO EXEMPLO. NAO SEI COMO IMPLEMENTAR.
    
}

