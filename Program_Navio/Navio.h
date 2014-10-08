#ifndef NAVIO_H
#define	NAVIO_H
#include<iostream>
using namespace std;
#include <vector>
using std::vector;
#include <string>
using std::string;


#include "Data.h"

class Navio {
public:
    Navio();
    Navio(const Navio &);
    Navio(int, const Data & = Data(4,6,1942));
    ~Navio();
    
    //int getNome();
    //void setNome(string);
    //static modelo()const; // Analisar esse Caso, p qndo objeto criado se pode modificar
    
    //int getQuantidade_Combustivel();
    
    //void setHoras_navegadas();
    //int getHoras_navegadas();
    //void setLocal_Lat(int);
    //int getLocal_lat();
    //void setLocal_long(int);
    //int Local_long();
    //int getEstado();
    //void setEstado(int);
    
    void horasNavegacao();
    void Quantidade_Combustive();
    const static void Ano_Fab_frota();
    void batalhas()const;
    void anos_uso()const;
    void localizacao(); //Funcao exemplo. Nao sei como implementar.
    
    
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
    
};

#endif	/* NAVIO_H */

