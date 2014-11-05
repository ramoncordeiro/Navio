
// Classe tripulante para controlar a inserção e o número de tripulantes no navio.
// Essa classe 'Cria' um novo tripulante com valores por DEFAULT. 
#ifndef TRIPULANTES_H
#define	TRIPULANTES_H

class Tripulantes {
public:
    Tripulantes();
    Tripulantes(const Tripulantes &);
    Tripulantes(int ,const string,const string);
    Tripulantes(string nomeT);
    virtual ~Tripulantes();
    
    void setNome(string nomeT);
    string getNome();
    int getNovoTripulante();
    void setNovoTripulante(int ide,string nom,string carg); //pssado variaveis ident,nome,cargo
    int getQtdTripulantes();
    void setQtdTripulantes(int totalTripu);
private:
    int ident; // Essa variavel seria algo como Numero de alistamento, ou matricula Militar
    string nomeT;
    string cargo; //função/serviço que o tripulante desempenha na embarcação. 
    int qtdTripulantes;
};

#endif	/* TRIPULANTES_H */

