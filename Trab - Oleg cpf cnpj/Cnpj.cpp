#include "Cnpj.h"
#include <iostream>
using namespace std;


bool Cnpj::valCnpj(string x)
{
          int i,somador=0,digito1,result1,result2,digito2,aux=5;
          int aux1[x.length()];

          for(i=0;i!=x.length();i++)
        {
            string u = x.substr(i,1);
            aux1[i]= stoi(u);
        }


                 for(i=0;i<12;i++)
					{
						somador+=aux1[i]*aux;
						aux--;
						if(aux == 2)
						{
						    aux = 9;
						}

					}


				result1 = somador%11;

				if(result1 < 2)
                {
                    digito1 = 0;
                }
                else
                {
                    digito1 = result1 - 11;
                }



				//SEGUNDO DIGITO.

				somador=0;
                aux = 6;
				for(i=0;i<13;i++)
					{
						somador+=aux1[i]* aux;
						aux--;
						if(aux == 2)
						{
						    aux = 9;
						}
					}

				result2=(somador*10)%11;

				if(result2 < 2)
                {
                    digito2 = 0;
                }
                else
                {
                    digito2 = result2 - 11;
                }


				//RESULTADOS DA VALIDACAO.


				if((digito1==aux1[12]) && (digito2==aux1[13]))
					{
						return true;
					}
				else
					{
						return false;
					}

}
