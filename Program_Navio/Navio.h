#ifndef NAVIO_H
#define	NAVIO_H
#include<iostream>
using namespace std;

class Navio {
public:
    Navio();
    Navio(const Navio& orig);
    virtual ~Navio();
    
    int getNome();
    void setNome(string);
    static modelo(); // Analisar esse Caso, p qndo objeto criado se pode modificar
    void setQuantidade_Combustive(float);
    //const static Ano_Fab();
    float getQuantidade_Combustivel();
    int tempoMaximoNavegacao();
    void setHoras_navegadas();
    int getHoras_navegadas();
    void setLocal_Lat(int);
    int getLocal_lat();
    void setLocal_long(int);
    int Local_long();
    int getEstado();
    void setEstado(int);
    
    
private:
    string nome;
    static string modelo; 
    //VERICFICAR o CASO DESSA VARIAVEL: const static Ano_Fab; // Ano de Fabricação do Navio
    float Qtd_Combustivel;
    int t_Max_Nav; // Tempo Máximo de Navegação permitido para a embarcação.
    int Horas_navegadas; // Quantidade de Horas navegadas até a consulta
    int Local_Lat;
    int Local_Long;
    int Estado;
    
    
};

#endif	/* NAVIO_H */

