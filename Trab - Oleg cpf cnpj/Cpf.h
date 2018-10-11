#ifndef CPF_H
#define CPF_H
#include <iostream>
#include <string>

using namespace std;



class Cpf
{
private:
    string Cpf;
public:
    Cpf();
    static bool valCpf(string);
};
#endif // CPF_H
