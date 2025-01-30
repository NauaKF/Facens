/*
Kauan Fernandes Oliveira           RA: 210105
Luiz Pereira Reis                  RA: 210325
Pedro Henrique Todineyb Santos     RA: 210131
Rafael Ramos do Rosário            RA: 210814
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Protótipo das funções
void aloca(float **p, int tam);
float f(int grau, float valor);
void ImprimirTabela(int colunas, float *valoresX, float *valoresFX);
void Imprimir(int grau, float *MX, float *MFX);

float *multi = NULL; 
float *valoresX = NULL;
float *valoresFX = NULL;
float *MX = NULL;
float *MFX = NULL;	

main()
{
	setlocale(LC_ALL, "portuguese");
	
int i, grau=0, n, nivel;
float h, integral = 0, a, b;

int num_valores, j, cont=0, acabarprog=0, iteracao=0;
float pivo=0, mult21=0, mult31=0;
float l2=0, l1=0, l0=0;
    
    printf ("*----------------------------------------------*\n");
	printf ("|   PROGRAMAS CRIADOS DENTRO DESSE PROJETO:    |\n");
	printf ("*----------------------------------------------*\n");
	printf ("|         1 - INTEGRAÇÃO NUMÉRICA              |\n");
	printf ("|         2 - MÍNIMOS QUADRADOS                |\n");
	printf ("|         3 - SAIR                             |\n");
	printf ("*----------------------------------------------*\n");
	printf ("      DESEJA EXECUTAR QUAL PROGRAMA?: ");
	scanf ("%i", &nivel);
	system("cls");

if(nivel == 1)
{
    do
	{
		system("cls");
		printf("Programa da implementação da Integração Numérica de Trapézios em C");
		printf("\n\nPara darmos início, informe o grau da função (2 a 10): ");
    	scanf("%i", &grau);
    	fflush(stdin);
    	if(grau < 2 || grau > 10)
    	{
    		printf("\nErro ao executar, tente novamente com outro grau de função!\n\n");
    		system("pause");
    		system("cls");
    	}
	}while(grau < 2 || grau > 10);
	
	aloca(&multi, grau);
	
	system("cls");
	
	 for(i=0; i<=grau; i++)
    {
		printf("Informe o fator multiplicador de x^%i: ", i);
		scanf("%f", multi+i);
		fflush(stdin);
    }

    //Exibindo a função recebida
    printf("\nA função recebida foi: f(x) = ");
    for(i=0; i<=grau; i++)
    {
        printf("%.2fx^%i", *(multi+i), i);
        if(i<grau)
            printf(" + ");
        else
            printf(" = 0");
    }
   	printf("\n\n");
    system("pause");
    system("cls");

    printf("Informe o valor inicial: ");
    scanf("%f", &a);
    fflush(stdin);
    
    printf("Informe o valor final: ");
    scanf("%f", &b);
    fflush(stdin);

	printf("Informe o número de subdivisões: (recomenda-se utilizar números grandes): ");
    scanf("%i", &n);
    fflush(stdin);
    
    h = (b-a)/n;
    
    integral = integral + f(grau, a);
    
    for(i=1; i<n-1; i++)
    {
    	integral = integral + 2*f(grau,a+(i*h));
	}
	
	integral = integral + f(grau, b);
    integral = integral * h/2;
    
    printf("\nValor aproximado da integral: %f\n", integral);
    system("pause");
}
else if(nivel == 2)
{
	do
	{
		system("cls");
		printf("Programa do método dos mínimos quadrados e eliminação de Gauss em C");
		printf("\n\nPara darmos início, informe o grau da função (1 ou 2): ");
    	scanf("%i", &grau);
    	fflush(stdin);
    	if(grau < 1 || grau > 2)
    	{
    		printf("\nErro ao executar, tente novamente com outro grau de função!\n\n");
    		system("pause");
    		system("cls");
    	}
	}while(grau < 1 || grau > 2);

    printf("\nDigite o número de valores: ");
    scanf("%i", &num_valores);
    fflush(stdin);

    aloca(&valoresX, num_valores);
    aloca(&valoresFX, num_valores);

    system("cls");
    
    for(cont=0; cont<num_valores; cont++)
    {
        printf("Digite o valor do número %i de x: ", cont+1);
        scanf("%f", valoresX+cont);
        fflush(stdin);
    }
    
    printf("\n");
    
    for(cont=0; cont<num_valores; cont++)
    {
    printf("Digite o valor do número %i de f(x): ", cont+1);
        scanf("%f", valoresFX+cont);
        fflush(stdin);
	}
	
    ImprimirTabela(cont-1, valoresX, valoresFX);

    if(grau==2)
	{
        aloca(&MX, 9);
        aloca(&MFX, 3);

        for(i=0;i<9;i++)
		{
            *(MX+i) = 0;
        }

        for(i=0;i<3;i++)
		{
            *(MFX+i) = 0;
        }
        
        for(i=0;i<num_valores;i++)
		{
			//1ªLinha
            *(MX+0) += 1;
            *(MX+1) += *(valoresX+i);
            *(MX+2) += pow(*(valoresX+i),2);
            
            //2ªLinha
            *(MX+3) = *(MX+1);
            *(MX+4) = *(MX+2);
            *(MX+5) += pow(*(valoresX+i),3);
            
            //3ªLinha
            *(MX+6) = *(MX+2);
            *(MX+7) = *(MX+5);
            *(MX+8) += pow(*(valoresX+i),4);
            
            *(MFX+0) += *(valoresFX+i);
            *(MFX+1) += (*(valoresFX+i) * *(valoresX+i));
            *(MFX+2) += (*(valoresFX+i) * pow(*(valoresX+i),2));
        }

        iteracao = 1;
        printf("\n");
        Imprimir(2, MX, MFX);

        do{
		if(iteracao==1)
        {
            pivo = *(MX+0);
            mult21 = *(MX+3) / pivo;
            mult31 = *(MX+6) / pivo;
        }
        else if(iteracao==2)
        {
            pivo = *(MX+4);
            mult21 = *(MX+4) / pivo;
            mult31 = *(MX+7) / pivo;
        }
        else
        {
            pivo = *(MX+8);
            mult21 = *(MX+5) / pivo;
            mult31 = *(MX+8) / pivo;
        }
        if(*(MX+3) != 0){
            printf("\nITERAÇÃO = %i | PIVÔ = %.4f | MULTIPLICADOR = %.4f\n", iteracao, pivo, mult21);

            for(i=0;i<num_valores;i++)
			{
                if(i!=num_valores-1)
                {
                    if(iteracao==1)
                        *(MX+(i+3)) = (*(MX+(i+3)) - (*(MX+i) * mult21));
                    else if(iteracao==2)
                        *(MX+(i+3)) = (*(MX+(i+3)) - (*(MX+(i+3)) * mult21));
                    else
                        *(MX+(i+3)) = (*(MX+(i+3)) - (*(MX+(i+6)) * mult21));
                }
                else
                {
                    if(iteracao==1)
                        *(MFX+1) = (*(MFX+1) - (*(MFX+0) * mult21));
                    else if(iteracao==2)
                        *(MFX+1) = (*(MFX+1) - (*(MFX+1) * mult21));
                    else
                       *(MFX+1) = (*(MFX+1) - (*(MFX+2) * mult21));
                }
            }
            Imprimir(2, MX, MFX);
        }
        if((*(MX+6) != 0) || (*(MX+7) != 0))
        {
            printf("\nITERAÇÃO = %i | PIVÔ = %.4f | MULTIPLICADOR = %.4f\n", iteracao, pivo, mult31);
            for(i=0;i<num_valores;i++)
			{
                if(i!=num_valores-1)
                {
                    if(iteracao==1)
                        *(MX+(i+6)) = (*(MX+(i+6)) - (*(MX+i) * mult31));
                    else if(iteracao==2)
                        *(MX+(i+6)) = (*(MX+(i+6)) - (*(MX+(i+3)) * mult31));
                    else
                        *(MX+(i+6)) = (*(MX+(i+6)) - (*(MX+(i+6)) * mult31));
                }
                else
                {
                    if(iteracao==1)
                        *(MFX+2) = (*(MFX+2) - (*(MFX+0) * mult31));
                    else if(iteracao==2)
                        *(MFX+2) = (*(MFX+2) - (*(MFX+1) * mult31));
                    else
                       *(MFX+2) = (*(MFX+2) - (*(MFX+2) * mult31));
                }
            }
            Imprimir(2, MX, MFX);
        }
        else if(*(MX+3) ==0 && *(MX+6) ==0 && *(MX+7) ==0 )
        {
        	acabarprog=1;
            l2 = *(MFX+2) / *(MX+8);
            l1 = ((*(MFX+1) - (*(MX+5) * l2)) / *(MX+4));
            l0 = (*(MFX+0) - (*(MX+1)*l1 + *(MX+2)*l2)) / *(MX+0);
            printf("\nRAÍZES = %.3fx^2 / %.3fx / %.3f\n", l2, l1, l0);
        }
        iteracao++;
        }while(acabarprog==0);

    }
    else
    {
        aloca(&MX, 4);
        aloca(&MFX, 2);
        
        for(i=0;i<4;i++)
		{
            *(MX+i) = 0;
        }

        for(i=0;i<2;i++)
		{
            *(MFX+i) = 0;
        }
        
        for(i=0;i<num_valores;i++)
		{
            *(MX+0) += 1;
            *(MX+1) += *(valoresX+i);
            *(MX+2) += *(valoresX+i);
            *(MX+3) += pow(*(valoresX+i),2);
            
            *(MFX+0) += *(valoresFX+i);
            *(MFX+1) += (*(valoresFX+i) * *(valoresX+i));
        }
        Imprimir(1, MX, MFX);
        iteracao=0;

        pivo = *(MX+0);
        mult21 = *(MX+2) / pivo;
        printf("\nPIVÔ = %.4f | MULTIPLICADOR = %.4f\n", pivo, mult21);
        if(*(MX+2) != 0)
        {
            *(MX+2) = (*(MX+2)) - (*(MX+0) * mult21);
            *(MX+3) = (*(MX+3)) - (*(MX+1) * mult21);
            *(MFX+1) = (*(MFX+1) - (*(MFX+0) * mult21));
            Imprimir(1, MX, MFX);
        }
        l2 = *(MFX+1) / *(MX+3);
        l1 = ((*(MFX+0) - (*(MX+1) * l2)) / *(MX+0));
        printf("\nRAÍZES = %f / %f\n", l2, l1);
    }
    printf("\n");
    system("pause");
}
}

void aloca(float **p, int tam)
{
    if((*p=(float*)realloc(*p, tam*sizeof(int)))==NULL)
        exit(1);
}

void ImprimirTabela(int colunas, float *valoresX, float *valoresFX)
{
    int i = 0;
	
	system("cls");
    printf("\t TABELA PREENCHIDA:\n");
    printf("------------------------------------");
    printf("\nX   : ");
    for(i=0; i<=colunas; i++)
    {
        printf("\t%.2f", *(valoresX+i));
    }
    printf("\t\nf(x): ");
    for(i=0; i<=colunas; i++)
    {
        printf("\t%.2f", *(valoresFX+i));
    }
    printf("\n------------------------------------");
}

void Imprimir(int grau, float *MX, float *MFX)
{
    if(grau==2)
	{
        printf("\n|%.2f %.2f %.2f| x a0 = %.2f\n|%.2f %.2f %.2f| x a1 = %.2f\n|%.2f %.2f %.2f| x a2 = %.2f\n",*(MX+0), *(MX+1), *(MX+2), *(MFX+0),*(MX+3), *(MX+4), *(MX+5), *(MFX+1),*(MX+6), *(MX+7), *(MX+8), *(MFX+2));
    }
    else
	{
         printf("\n|%.2f %.2f| x a0 = %.2f\n|%.2f %.2f| x a1 = %.2f\n",*(MX+0), *(MX+1), *(MFX+0),*(MX+2), *(MX+3), *(MFX+1));
    }
}

//Funcao que realiza o calculo em em determinado ponto
float f(int grau, float valor)
{
    int i;
    float resultado = 0;

    for(i=0; i<=grau; i++)
    {
        resultado = resultado + *(multi+i)*pow(valor, i);
    }

    return resultado;
}

