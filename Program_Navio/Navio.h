#ifndef NAVIO_H
#define	NAVIO_H
#include<iostream>
using namespace std;
#include <vector>
using std::vector;
#include <string>
using std::string;

#include "Data.h"
#include "Tripulantes.h"
#include "Armamento.h"

class Navio {
    friend ostream &operator<<( ostream &, const Navio &); //Inserido Branch Edicao.
    friend istream &operator<< ( istream &, const Navio & ); //Inserido Branch Edicao.
    
public:
    Navio();
    Navio(const Navio &);
    Navio(string nome, const Data & = Data(4,6,1942));
    ~Navio();
    
    void horasNavegacao();
    void Quantidade_Combustive();
    const static void Ano_Fab_frota();
    void batalhas()const;
    void anos_uso()const;
    void localizacao(); //Funcao exemplo. Nao sei como implementar.
    
    
    //Metodos inseridos para exemplificar sobrecarga. Esses metodos estão na versão Branch: Edição
    Navio::Navio();//construtor para tripulantes
    Navio( int tripu);
    Navio operator =(Navio nv);
    void print();
    
    
private:
    static int frota;
    string nome;
    static string modelo; 
    int Qtd_Combustivel;
    static int Horas_navegadas; // Quantidade de Horas navegadas até a consulta
    int Local_Lat;
    int Local_Long;
    int Estado; // 0 - Não alerta , 1 - alerta
    const static Data FAB; // Data de Fabricação do Navio.
    vector<string> batalha;
    Data atual;
    int num_tripulantes; //Add para fazer versão o Branch Edicao
                         //Esta ultima variavel foi inserida para exemplificar sobrecarga
    
};

#endif	/* NAVIO_H */

