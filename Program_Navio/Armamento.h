//Classe armamento parar quantificar as armas que o navio contém.
// Esta classe também registra o tipo de arma que contém no navio
//
#ifndef ARMAMENTO_H
#define	ARMAMENTO_H

class Armamento {
public:
    Armamento();
    Armamento(const Armamento &);
    Armamento(const string tipo,const int quantidade);
    virtual ~Armamento();
 
    void setTipo(string tip);//passado variavel tipo como parametro
    string getTipo();
    void setQuantidade_arma(int quant); //passado variavel quantidade como parametro
    int getQuantidade_arma();
    
private:
    string tipo;
    int quantidade;
};

#endif	/* ARMAMENTO_H */

