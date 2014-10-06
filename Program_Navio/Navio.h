#ifndef NAVIO_H
#define	NAVIO_H
#include<iostream>
using namespace std;

class Navio {
public:
    Navio();
    Navio(const Navio& orig);
    virtual ~Navio();
private:
    string modelo;
};

#endif	/* NAVIO_H */

