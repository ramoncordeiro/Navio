
#ifndef PORTAAVIAO_H
#define	PORTAAVIAO_H
#include "Navio.h"
#include "Data.h"
//

class PortaAviao {
public:
    PortaAviao();
    PortaAviao(const PortaAviao &);
    virtual ~PortaAviao();
    
private:
    int qtdAviao;
    int pistapartida;
    int pistachegada;
    
};

#endif	/* PORTAAVIAO_H */

