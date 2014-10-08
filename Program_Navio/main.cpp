#include <cstdlib>
#include<iostream>
using namespace std;

#include "Navio.h"
#include "Data.h"
/*
 * 
 */
int main(int argc, char** argv) {
    cout <<"Inicio do Programa"<<"\n";
    Navio nv1("Guerra1",Data(12,6,1945));
    Navio::Ano_Fab_frota();
    cout<<'\n';
    Navio::anos_uso();
    cout<<'\n';
    Navio::batalhas();
    cout<<'\n';
    
    Navio::horasNavegacao();
    cout<<'\n';
    Navio nv2(nv1);
    return 0;
    
}

