#ifndef CNPJ_H
#define CNPJ_H
#include <iostream>
#include <string>

using namespace std;



class Cnpj
{
private:
    string Cnpj;
public:
    Cnpj();
    static bool valCnpj(string);
};
#endif // CNPJ_H
