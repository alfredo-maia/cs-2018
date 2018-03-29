#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Validacoes.h"

int dia_semana_bkp;

int main(int argc, char *argv[])

{
    //Variáveis
    int data_atual;
    int ano_bissexto;
    int data_referencia;
    int dia_semana;


    //Entrada de dados:

    //Primeira Entrada
    data_atual = atoi(argv[1]);
    //Segunda Entrada
    ano_bissexto = atoi(argv[2]);
    //Terceira Entrada
    data_referencia = atoi(argv[3]);
    //Quarta Entrada
    dia_semana = atoi(argv [4]);

    //Validação
    if (argc != 5)
        return -1;
    /*
    printf("Data: %i\n", data_atual);
    printf("Ano bissexto: %i\n", ano_bissexto);
    printf("Data referencia: %i\n", data_referencia);
    printf("Dia da semana: %i\n", dia_semana);
    */

    //Processamento:

    //Variaveis para calculo:
    int ano_dt_atual = 0;
    int mes_dt_atual  = 0;
    int dia_dt_atual  = 0;
    int ano_dt_referencia = 0;
    int mes_dt_referencia  = 0;
    int dia_dt_referencia  = 0;


    //Calculo para obter ano data_atual:
    ano_dt_atual  =  data_atual / 10000;

    //calculo para obter mes data_atual
    mes_dt_atual  = (data_atual/100) - ano_dt_atual  * 100;

    //Calculo para obter dia data_atual
    dia_dt_atual  = data_atual%100;

    //Calculo para obter ano data_referencia:
    ano_dt_referencia  =  data_referencia / 10000;

    //calculo para obter mes data_referencia
    mes_dt_referencia = (data_referencia/100) - ano_dt_atual  * 100;

    //Calculo para obter dia data_referencia
    dia_dt_referencia  =  data_referencia%100;

    /*
    printf("Ano Atual: %i == Ano Referencia: %i\n", ano_dt_atual, ano_dt_referencia);
    printf("Mes Atual: %i == Mes Referencia: %i\n", mes_dt_atual, mes_dt_referencia);
    printf("Dia Atual: %i == Dia Referencia: %i\n", dia_dt_atual, dia_dt_referencia);
    */

    //Comparando a data atual com a referencia:
    if (ano_dt_atual > ano_dt_referencia)
    {
        //Salvando dia da semana
        dia_semana_bkp = dia_semana;
        //Recuando até a data de referencia
            while (ano_dt_atual > ano_dt_referencia)

            {
                if (mes_dt_atual > mes_dt_referencia )
                    {
                         while(mes_dt_atual > mes_dt_referencia)
                            {
                                if (mes_dt_referencia > 12)
                                    {
                                        ano_dt_referencia++;
                                        mes_dt_referencia = 1;
                                        break;
                                    }
                                if ( dia_dt_atual > dia_dt_referencia)
                                    {
                                        for (;dia_dt_atual > dia_dt_referencia; dia_dt_referencia++)
                                            {
                                                if (dia_dt_referencia > 30)
                                                {
                                                    mes_dt_referencia++;
                                                    dia_dt_referencia = 1;
                                                    break;
                                                }
                                                //Contador da semana
                                                dia_semana_bkp--;
                                                if (dia_semana_bkp == 0)
                                                    {
                                                        dia_semana_bkp =6;
                                                        printf("Entre carai\n");
                                                    }

                                            }
                                    }

                                else if (dia_dt_atual < dia_dt_referencia)
                                    {
                                    for (;dia_dt_atual < dia_dt_referencia; dia_dt_atual++)
                                            {
                                                if (dia_dt_atual > 30)
                                                {
                                                    mes_dt_atual++;
                                                    dia_dt_atual = 1;
                                                    break;
                                                }
                                                 //Contador da semana
                                                        dia_semana_bkp++;
                                                        if (dia_semana_bkp == 6)
                                                            {
                                                                dia_semana_bkp =0;
                                                                printf("Entre carai dia menor\n");
                                                            }

                                            }
                                    }
                                else
                                    {
                                        break;
                                    }
                            }
                    }
                else if (mes_dt_atual < mes_dt_referencia)
                    {
                         while(mes_dt_atual < mes_dt_referencia)
                            {
                                if (mes_dt_atual > 12)
                                    {
                                        ano_dt_atual++;
                                        mes_dt_atual = 1;
                                        break;
                                    }
                                if ( dia_dt_atual < dia_dt_referencia)

                                    {

                                        for (;dia_dt_atual < dia_dt_referencia; dia_dt_atual++)
                                            {
                                                if (dia_dt_atual > 30)
                                                {
                                                    mes_dt_atual++;
                                                    dia_dt_atual = 1;
                                                    break;
                                                }
                                                //Contador da semana
                                                dia_semana_bkp--;
                                                if (dia_semana_bkp == 0)
                                                    {
                                                        dia_semana_bkp =6;
                                                        printf("Entre carai\n");
                                                    }

                                            }
                                    }

                                else if (dia_dt_atual < dia_dt_referencia)
                                    {
                                    for (;dia_dt_atual < dia_dt_referencia; dia_dt_atual++)
                                            {
                                                if (dia_dt_atual > 30)
                                                {
                                                    mes_dt_atual++;
                                                    dia_dt_atual = 1;
                                                    break;
                                                }
                                                 //Contador da semana
                                                        dia_semana_bkp++;
                                                        if (dia_semana_bkp == 6)
                                                            {
                                                                dia_semana_bkp =0;
                                                                printf("Entre carai dia menor\n");
                                                            }

                                            }
                                    }
                                else
                                    {
                                        break;
                                    }
                            }
                    }
                else
                    {
                        //Tá vindo
                    }
            }

    else if (ano_dt_atual < ano_dt_referencia)
        {
            //Tá vindo
        }
    else
        {
            //Tá vindo
        }

    exit(dia_semana_bkp) ;

}
