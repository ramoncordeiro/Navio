
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

// ---------------------------------- DUVIDA ---------------------------------
// VE SE VAI SER NECESSARIO INCLUIR O FRIEND OPERATOR AQUI.

class Navio {
public:
    Navio(string nome,int qtdCOmbustivel,Data FabFrota,int horasNavegadas,Data atual);
    Navio(const Navio& orig);
    virtual ~Navio();
    
    
    // ------------------------ FUNCOES-------------------
      //funções de validação e inserção.
    void setNome(string nome);
    string getNome();
    void setCombustivel(int qtdCombustivel);
    int getCombustivel();
    void setdataFabFrota(Data FabFrota);
    Data getdataFabFrota();
    
    void qtdCombustivel(); // ESSA FUNÇÃO FAZ A MEDIDA DE COMBUSTIVEL APÓS OS USOS.
    const static void AnoFabFrota();
    void anosemUso()const;
    void horasNavegacao;

    
private:
    // ------------------------------- ATENÇÃO -------------------------
    //ANALISAR SE AS VARIAVEIS ESTÃO NOS TIPOS CORRETOS, E CONSEQUENTEMENTE SUAS FUNÇÕES
    //EX : STATIC OU STATIC INT
    //ACHAR UMA VARIAVEL PARAR SER CONST STATIC.
    static int frota;
    string nome;
    int qtdCombustivel;
    Data FabFrota; // Data de Fabricação do Navio.
    static int horasNavegadas; // Quantidade de Horas navegadas até a consulta
    Data atual;
};

#endif	/* NAVIO_H */

