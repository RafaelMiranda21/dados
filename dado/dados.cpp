#include "dados.h"

dados::dados()
{
  string cpf("");
  dia=mes=ano;

}
void dados::setdia(int dia)
{
    if(dia <= 0 || dia > 31)
       cout<<"dia invalido!";
    else
       this->dia = dia;
}

void dados::setmes(int mes)
{
    if(mes <= 0 || mes > 31)
      cout<<"mes invalido!";
    else
      this->mes = mes;
}

void dados::setano(int ano)
{
    if(ano < 1870 || ano >2018)
        cout<<"ano invalido!";
    else
        this->ano = ano;
}

int dados::getdia()
{
    return dia;
}

int dados::getmes()
{
    return mes;
}

int dados::getano()
{
    return ano;
}

int dados::validadata()
{
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1900 && ano <= 2100)) //verifica se os numeros sao validos
     {
                if ((dia == 29 && mes == 2) && ((ano % 4) == 0)) //verifica se o ano e bissexto
                {
                    return 1;
                }
                if (dia <= 28 && mes == 2) //verifica o mes de feveireiro
                {
                    return 1;
                }
                if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) //verifica os meses de 30 dias
                {
                    return 1;
                }
                if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)) //verifica os meses de 31 dias
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
     }

    else
     {
                    return 0;
     }
}

void dados::setcpf()
{
    getline(cin , cpf);


}
