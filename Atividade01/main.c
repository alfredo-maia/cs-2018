#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variáveis
    int data_atual; //1º Argumento
    int ano_bissexto; //2º Argumento
    int data_referencia; //3º Argumento
    int dia_semana; //4º Argumento
    int contador_de_argumentos;

    do //Validação da quantidade de argumentos:
        {
        contador_de_argumentos = 0;
        //Entrada de dados
        printf("*******************************************************\n");
        printf("          ######## Search DaY #############            \n");
        printf("*******************************************************\n");
        printf("*\n");
        printf("*\n");
        printf("*\n");
        printf("*\n");
        printf("*\n");
        printf("*\n");
        printf("Entre com a data no formato (AAAAMMDD): ");
        scanf("%d", &data_atual);
        contador_de_argumentos++;
        printf("\n");
        printf("--------------------------------------------------------\n");
        printf("*\n");
        printf("*\n");
        printf("Digite um ano bissexto:");
        scanf("%d", &ano_bissexto);
        contador_de_argumentos++;
        printf("--------------------------------------------------------\n");
        printf("*\n");
        printf("*\n");
        printf("Digite uma data de referencia:");
        scanf("%d", &data_referencia);
        contador_de_argumentos++;
        //Menu para capurar dia da semana:
        do{
        printf("--------------------------------------------------------\n");
        printf("*\n");
        printf("*\n");
        printf("Digite o dia da semana, onde:\n");
        printf("|| 0 = Segunda-Feira\n");
        printf("|| 1 = Terca-Feira\n");
        printf("|| 2 = Quarta-Feira\n");
        printf("|| 3 = Quinta-Feira\n");
        printf("|| 4 = Sexta-Feira\n");
        printf("|| 5 = Sabado\n");
        printf("|| 6 = Domingo\n");
        printf("\n");
        printf("  > ");
        scanf("%d", &dia_semana);
        printf("\n");
        //Mensagem de erro dia da semana for invalido:
            if (dia_semana < 0 || dia_semana > 6)
                    printf("-----Dia da semana invalido, tente novamente-----\n");
        }
        while(
                dia_semana  < 0 || dia_semana > 6
            );
        contador_de_argumentos++;
        //Mesagem de erro se contador de argumentos for diferente 4
        if (contador_de_argumentos != 4)
                printf("\nNumero de argumenos invalidos, tente novamente:\n");
        }
   while (
          contador_de_argumentos != 4
          );

   //Processamento:
   //Variaveis para calculo:
    int ano_dt_atual = 0;
    int mes_dt_atual  = 0;
    int dia_dt_atual  = 0;
    int ano_dt_referencia = 0;
    int mes_dt_referencia  = 0;
    int dia_dt_referencia  = 0;
    int dia_semana_bkp;
    //Calculo para obter ano data_atual:
    ano_dt_atual  =  data_atual / 10000;
    //calculo para obter mes data_atual
    mes_dt_atual  = (data_atual/100) - ano_dt_atual  * 100;
    //Calculo para obter dia data_atual
    dia_dt_atual  = data_atual%100;
    //Comparando a data atual com a referencia:
    if (data_atual > data_referencia)
    {
        //Salvando dia da semana
        dia_semana_bkp = dia_semana;
        //Recuando até a data de referencia
            while (ano_dt_atual > ano_dt_referencia)
            {
                while(mes_dt_atual > mes_dt_referencia )
                    {
                    while(dia_dt_atual > dia_dt_referencia)
                        {
                        dia_dt_atual--;
                        //Contador da semana
                            if(dia_semana_bkp == 0)
                                dia_semana_bkp = 6;
                            dia_semana_bkp ++;
                        }
                    mes_dt_atual--;
                    }
            ano_dt_atual--;
            }
        //saida de dados
        system("cls");
        printf("--------------------------------------------------------\n");
        printf("\nO dia da semana e:%d", dia_semana_bkp);
        printf("\n :) \n");
        printf("--------------------------------------------------------\n");
    }
    else if (data_referencia > data_atual)
        {
         //Salvando dia da semana
        dia_semana_bkp = dia_semana;
        //Recuando até a data de atual
            while (ano_dt_referencia > ano_dt_atual)
            {
                while(mes_dt_referencia > mes_dt_atual )
                    {
                    while(dia_dt_referencia > dia_dt_atual)
                        {
                        dia_dt_referencia--;
                        //Contador da semana
                            if(dia_semana_bkp == 0)
                                dia_semana_bkp = 6;
                            dia_semana_bkp--;
                        }
                    mes_dt_referencia--;
                    }
            ano_dt_referencia--;
            }
        //saida de dados
        system("cls");
        printf("--------------------------------------------------------\n");
        printf("\nO dia da semana e:%d", dia_semana_bkp);
        printf("\n :) \n");
        printf("--------------------------------------------------------\n");
        }
    else
        {
        //saida de dados
        system("cls");
        printf("--------------------------------------------------------\n");
        printf("\nAs datas sao iguais");
        printf("\n :( \n");
        printf("--------------------------------------------------------\n");
        }
    printf("*******************************************************\n");
    printf("          ######## ATE LOGO #############            \n");
    printf("*******************************************************\n");
    return 0;
}
