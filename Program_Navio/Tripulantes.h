// Classe tripulante para controlar a inserção e o número de tripulantes no navio.
// Essa classe 'Cria' um novo tripulante com valores por DEFAULT. 
#ifndef TRIPULANTES_H
#define	TRIPULANTES_H

class Tripulantes {
public:
    Tripulantes();
    Tripulantes(const Tripulantes &);
    Tripulantes(int ,const string,const string);
    virtual ~Tripulantes();
    
    int getNovoTripulante();
    void setNovoTripulante(int ide,string nom,string carg);
    int getQtd_tripulantes();
    void setQtd_tripulantes(int tota_tripu);
private:
    int ident; // Essa variavel seria algo como Numero de alistamento, ou matricula Militar
    string nome_t;
    string cargo; //função/serviço que o tripulante desempenha na embarcação. 
    int qtd_tripulantes;
};

#endif	/* TRIPULANTES_H */

