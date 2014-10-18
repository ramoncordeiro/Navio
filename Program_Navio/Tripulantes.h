
#ifndef TRIPULANTES_H
#define	TRIPULANTES_H

class Tripulantes {
public:
    Tripulantes();
    Tripulantes(const Tripulantes &);
    Tripulantes(int ,const string,const string);
    virtual ~Tripulantes();
    
private:
    int id; // Essa variavel seria algo como Numero de alistamento, ou matricula Militar
    string nome_t;
    string cargo; //função/serviço que o tripulante desempenha na embarcação. 
    int num_tripulantes;
};

#endif	/* TRIPULANTES_H */

