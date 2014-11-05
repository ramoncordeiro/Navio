/*Destroyer é um tipo de embarcação Militar que possui escudo antimissel, 
 esta emarrcação foi projetada para transportar com segurança outras embarcações militares.*/
//
#ifndef DESTROYER_H
#define	DESTROYER_H

#include <iostream>

#include "NavioMilitar.h"

using namespace std;

class Destroyer: public NavioMilitar {
public:
    Destroyer(intEstado,string batalha,int antiMissel,int qtdMisseis);
    Destroyer(const Destroyer& Destruidor);
    virtual ~Destroyer();
    
    setantiMissel(int antiMissel);
    getantiMissel();
    setqtdMisseis(int qtdMisseis);
    getqtdMisseis();
private:
    int antiMissel; // Destroyer Possui escudos antiMisseis para interceptar ataques inimigos
    int qtdMisseis; // A embarcação terá um número máximo de Mísseis
};

#endif	/* DESTROYER_H */

