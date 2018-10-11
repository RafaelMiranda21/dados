#include "Cpf.h"
#include <iostream>
using namespace std;


bool Cpf::valCpf(string x)
{

					int i,somador=0,digito1,digito2;
                    int aux[x.length()];

                for(i=0;i!=11;i++)
                {
                   string u = x.substr(i,1);
                   aux[i]= stoi(u);
                }

				//PRIMEIRO DIGITO.



				for(i=0;i<9;i++)
					{
						somador+=aux[i]*(10-i);
					}



				digito1=(somador*10)%11;



				//SEGUNDO DIGITO.

				somador=0;

				for(i=0;i<10;i++)
					{
						somador+=aux[i]*(11-i);
					}

				digito2=(somador*10)%11;


				//RESULTADOS DA VALIDACAO.


				if((digito1==aux[9]) && (digito2==aux[10]))
					{
						return true;
					}
				else
					{
						return false;
					}



}
