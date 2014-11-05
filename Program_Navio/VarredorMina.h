
/*Este tipo de embarcação destroi minas através de algumas técnicas
 as tecnicas são :
           (1)  -mecânica, jogando redes de aço para capturar as minas; 
 *         (2)  -Acústica, emitindo freqüências para explodir os dispositivos ativados por som;
 *         (3)  -magnética, em que um cabo com eletrodos aciona as armadilhas; 
 *         (4)   -explosiva, quando uma espécie de granada detona outros explosivos
            
 * NESTE PROGRAMA UTILIZAREI UM VARREDOR DE MINA EXPLOSIVA (4)         
 *         
 */

#ifndef VARREDORMINA_H
#define	VARREDORMINA_H

#include "NavioMilitar.h"


class VarredorMina: public NavioMilitar {
public:
    VarredorMina(int Estado,string batalha);,int granadas,int qtdRadarMina);
    VarredorMina(const VarredorMina &Varredor);
    virtual ~VarredorMina();
    
    void setGrananas(int granadas);
    int getGranadas();
    void setqtdRadarMina(int qtdRadarMina);
    int getqtdRadarMina();
private:
    int granadas;
    int qtdRadarMina; //A embarcação pode ter 1,2 ou mais radares para detectar mina submarina
};

#endif	/* VARREDORMINA_H */

