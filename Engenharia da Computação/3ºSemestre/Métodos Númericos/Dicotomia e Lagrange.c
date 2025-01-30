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

float funcaoX(int grau, float x, char f);
float CalculaValorK(float a, float b, float erro);
void ImprimirCabecalhoTabela();
void ImprimirTabela(int iteracao, float a, float b, float m, float fA, float fB, float fM, char fAfM, char fMfB);

float *multi = NULL;
float *valoresX = NULL;
float *valoresFX = NULL;

main()
{
	setlocale(LC_ALL, "portuguese");
	
int i, grau, nivel, final = 0;
float valor_a, valor_b, valor_m, erro, fA, fB, fM, resultado, K, mudar_valor;
char fAfM, fBfM, continuar;

int pontos, n, grau_f, cont, i1, j, tamanho = 3;
float Px, valorCalcular, Li;
char resp;

	printf ("*----------------------------------------------*\n");
	printf ("|   PROGRAMAS CRIADOS DENTRO DESSE PROJETO:    |\n");
	printf ("*----------------------------------------------*\n");
	printf ("|         1 - MÉTODO DE DICOTOMIA              |\n");
	printf ("|         2 - MÉTODO DE LAGRANGE               |\n");
	printf ("|         3 - SAIR                             |\n");
	printf ("*----------------------------------------------*\n");
	printf ("      DESEJA EXECUTAR QUAL PROGRAMA?: ");
	scanf ("%i", &nivel);
	system("cls");

if(nivel == 1)
	{
// MÉTODO DA DICOTOMIA
	do
	{
		system("cls");
		printf("Programa da implementação do Método de Dicotomia em C, que consiste em reduzir a amplitude do intervalo [a,b].");
		printf("\n\nPara darmos início, informe o grau da função (2 a 6): ");
    	scanf("%i", &grau);
    	fflush(stdin);
    	if(grau < 2 || grau > 6)
    	{
    		printf("\nErro ao executar, tente novamente com outro grau de função!\n\n");
    		system("pause");
    		system("cls");
    	}
	}while(grau < 2 || grau > 6);
     
    multi = (float*)malloc(grau * sizeof(float));
	printf("\nA função deseja é de %iº grau! ", grau);
	getch();
	
	system("cls");
	
    for(i=grau; i>=0; i--)
    {
		printf("Informe o fator multiplicador de x^%i: ", i);
		scanf("%f", multi+i);
		fflush(stdin);
    }

    //Exibindo a função recebida
    printf("\nA função recebida foi: f(x) = ");
    for(i=grau; i>=0; i--)
    {
        if(i==0)
            printf("%.2f = 0", *(multi+i));
        else
            printf("%.2fx^%i + ", *(multi+i), i);
    }
   	printf("\n\n");
    system("pause");
    system("cls");
    
    do
	{
		inicio:
		system("cls");
		printf("Informe o valor de A: ");
    	scanf("%f", &valor_a);
    	fflush(stdin);
    
    	printf("Informe o valor de B: ");
    	scanf("%f", &valor_b);
    	fflush(stdin);	
    	
    	if(valor_a == valor_b)
    	{
    		printf("\nErro! Tente novamente, pois os valores não podem ser iguais!\n\n");
    		system("pause");
    		system("cls");
    	}
    	
	}while(valor_a == valor_b);
    
    if(valor_a > valor_b)
    {
    	valor_b = mudar_valor;
    	valor_b = valor_a;
    	valor_a = mudar_valor;
	}
    
    fA = funcaoX(grau, valor_a, 'a');
    fB = funcaoX(grau, valor_b, 'b');
    resultado = fA * fB;
    
    printf("\nF(A)%.2f * F(B)%.2f = %.2f\n", fA, fB, resultado);
    
        if(resultado > 0)
    	{
    		system("cls");
        	printf("Não existe um zero na função informada! Tente novamente.\n");
       
        	printf("\nDeseja digitar outro intervalo? <S/N>: ");
        	scanf("%c", &continuar);
        	toupper(continuar);
        	fflush(stdin);
        	
        	printf("\n\n");
        	
        if(continuar == 'N' || continuar == 'n')
        {
        	system("cls");
        	printf("Programa finalizado, volte sempre!\n\n");
            system("pause");
            return 0;
        }
        else
        {
        	goto inicio;
            system("cls");
            printf("FUNÇÃO: ");
            for(i=grau; i>=0; i--)
            {
                if(i==0)
                    printf("%.2f = 0", *(multi+i));
                else
                    printf("%.2fx^%i + ", *(multi+i), i);
            }
        }
    }
    else
    {
        printf("\nExiste um zero na função informada! Vamos ao próximo passo.\n\n");
    }

system("pause");
system("cls");

//Valor do erro
printf("Informe o erro: ");
scanf("%f", &erro);
fflush(stdin);

//Calcular o K
K = CalculaValorK(valor_a, valor_b, erro);
printf("\nK = %.2f\n", K);

//Cabeçalho
system("cls");
printf("F(x): ");
for(i=grau; i>=0; i--)
{
    if(i==0)
        printf("%.2f = 0", *(multi+i));
    else
        printf("%.2fx^%i + ", *(multi+i), i);
}
printf("\n\nK = %.0f\nErro = %.4f\nIntervalo = [%.3f, %.3f]\n", K, erro, valor_a, valor_b);
ImprimirCabecalhoTabela();

//Iterações
i = 1;
valor_m = (valor_a + valor_b) / 2;
while(i <= K)
{
    valor_m = (valor_a + valor_b) / 2;

    fA = funcaoX(grau, valor_a, 'a');
    fB = funcaoX(grau, valor_b, 'b');
    fM = funcaoX(grau, valor_m, 'm');

    if(fA * fM < 0)
        {
            fAfM = '-';
            fBfM = '+';
            valor_b = valor_m;
        }
    else
        {
            fBfM = '-';
            fAfM = '+';
            valor_a = valor_m;
        }

    ImprimirTabela(i, valor_a, valor_b, valor_m, fA, fB, fM, fAfM, fBfM);

    i++;
}

printf("\nPrograma finalizado! Seu valor final foi: %.3f\n\n", valor_m);

final = 1;

if(final == 1)
{
	system("pause");
	return 0;
}
}

else if(nivel == 2)
{
	//Forma de Lagrange
	printf("A forma de Lagrange consiste em determinar, de forma aproximada,\n");
	printf("uma função que descreve o comportamento de outra função que não\n");
	printf("se conhece, mas que tem valores tabelados do tipo (x, f(x)).");
	printf("\n\n\tPara dar início ao programa:\n");
    printf("Digite o grau da função que deseja obter: ");
    scanf("%i", &grau_f);
	printf("\n");
	
    pontos = grau_f + 1;

valoresX = (float *)malloc(grau_f * sizeof(float));
valoresFX = (float *)malloc(grau_f * sizeof(float));

    for(cont=0; cont<pontos; cont++)
    {
    	printf("Digite o valor do %iº valor de X: ", cont+1);
    	scanf("%f", valoresX+cont);
    	fflush(stdin);
	}
    
    printf("\n");
    
    for(cont=0; cont<pontos; cont++)
    {
    	printf("Digite o valor do %iº valor de FX: ", cont+1);
    	scanf("%f", valoresFX+cont);
    	fflush(stdin);
    }
    
    printf("\n");

    do
    {
        printf("Digite o valor que deseja calcular: ");
        scanf("%f", &valorCalcular);
        fflush(stdin);

        //Implementar o calculo do Teorema de Lagrange
        for(i1=0; i1<pontos; i1++)
        {
    		printf("X(%i) = %f", i1, *(valoresX+i1));
    		printf("\n");
    	}

        for(j=0; j<pontos; j++)
        {
			printf("FX(%i) = %f", j, *(valoresFX+j));
			printf("\n");
        }
        
        Px = 0; 
        
        for(i1=0; i1<=grau_f; i1++)
        {
        	Li = 1;
        	for(j=0; j<=grau_f; j++)
        	{
        		if(i1!=j)
        		{
        			Li = Li * ((valorCalcular - *(valoresX+j)) / (*(valoresX+i1)-*(valoresX+j)));
				}
			}
			Px += (Li * *(valoresFX+i1));
            fflush(stdin);
		}
		
		printf("\nPx(%.2f) = %f", valorCalcular, Px);

        printf("\n\nDeseja calcular outro valor <S/N>? ");
        scanf("%c", &resp);
        fflush(stdin);
        
        system("cls");
        
    }while (resp == 's' || resp == 'S');

free(valoresX);
free(valoresFX);

system("pause");
}

else
{
	printf("Programa finalizado com sucesso!\n\n");
	system("pause");
	return 0;
}
}

float funcaoX(int grau, float x, char f)
{
int i;
float valor = 0;

for(i=grau; i>=0; i--)                                                   
    {                                                                    
        valor = valor + *(multi+i)*pow(x, i);                      
    }
    return valor;
}

float CalculaValorK(float a, float b, float erro)
{
    float fValorK;
    fValorK = (log10(b-a) - log10(erro))/(log10(2));
    
    return ceil(fValorK); //retornar valor arredondado
}

void ImprimirCabecalhoTabela()
{
    printf("\n\n\t\t\t     TABELA ITERAÇÕES\n\n");
    printf("   I \t|  a\t|  b\t|  m\t|  f(a)\t|  f(b)\t|  f(m)\t| fa*fm\t| fm*fb\t|\n");
    printf("--+-----+-------+-------+-------+-------+-------+-------+-------+-------\n");
}

void ImprimirTabela(int iteracao, float a, float b, float m, float fA, float fB, float fM, char fAfM, char fMfB)
{
    if(a > 999.99 || a < -999.99 || b > 999.99 || b < -999.99 || m > 999.99 || m < -999.99 ||fA > 999.99 || fA < -999.99 || fB > 999.99 || fB < -999.99 || fM > 999.99 || fM < -999.99)
        printf("   %i \t|%.0f\t|%.0f\t|%.0f\t|%.0f\t|%.0f\t|%.0f\t|%c\t|%c\t|  Valores que ocupam muitas casas decimais aparecem arredondados ou como 0 para não quebrar a tabela!\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);
    else if(a > 99.99 || a < -99.99 || b > 99.99 || b < -99.99 || m > 99.99 || m < -99.99 ||fA > 99.99 || fA < -99.99 || fB > 99.99 || fB < -99.99 || fM > 99.99 || fM < -99.99)
        printf("   %i \t|%.1f\t|%.1f\t|%.1f\t|%.1f\t|%.1f\t|%.1f\t|%c\t|%c\t|\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);
    else if(a > 9.99 || a < -9.99 || b > 9.99 || b < -9.99 || m > 9.99 || m < -9.99 ||fA > 9.99 || fA < -9.99 || fB > 9.99 || fB < -9.99 || fM > 9.99 || fM < -9.99)
        printf("   %i \t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%.2f\t|%c\t|%c\t|\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);
    else
        printf("   %i \t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%.3f\t|%c\t|%c\t|\n", iteracao, a, b, m, fA, fB, fM, fAfM, fMfB);
}


