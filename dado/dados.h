#ifndef DADOS_H
#define DADOS_H
#include<iostream>
using namespace std;

class dados
{
 private:
    string cpf;
    int dia,mes,ano;

public:
    dados();
    void setdia(int dia);
    int getdia();
    void setmes(int mes);
    int getmes();
    void setano(int ano);
    int getano();
    int validadata();
    void setcpf();
};

#endif // DADOS_H
