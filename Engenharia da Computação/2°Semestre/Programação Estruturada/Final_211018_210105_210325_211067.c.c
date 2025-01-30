//         Grupo 2 - AF

// Kauan da Silva Vieira      RA: 211018
// Kauan Fernandes Oliveira   RA: 210105
// Luiz Pereira Reis          RA: 210325
// Matheus Parizotto Martins  RA: 211067

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//concessionária.bin
typedef struct endereco{
	char logradouro[80]; 
 	char bairro[15]; 
 	char CEP[10]; 
 	char cidade[15]; 
 	char estado[3]; 
 	char fone[12]; 
 	char email[40]; 
} endereco;

typedef struct infocarro { 
 char sigla; 
 int regcarro; 
} infocarro; 

typedef union dadoscarro { 
 char sigla; 
 struct infocarro reservado; 
} dadoscarro; 

typedef struct loja { 
 int regloja; //gerar automático 
 char nome[30]; 
 char CNPJ[19]; 
 struct endereco end; 
 int sold; 
 int reserved; 
 union  dadoscarro  tabela[3]; 
} loja; 

//carros.bin
typedef struct infoloja { 
 char sigla; 
 char CNPJ[19]; 
} infoloja; 

typedef union dadosloja { 
 char sigla; 
 struct infoloja reserva; 
} dadosloja; 
 
typedef struct montadora { 
 int regcarro; //gerar automático 
 char modelo[20]; 
 char cor[10]; 
 float  valor; 
 union dadosloja status; 
} montadora; 

//Histórico
typedef struct data {
int dia;
int mes;
int ano;
} data;

typedef struct historicoVendas {
int reghist;
int regcarro;
char modelo[20];
char cor[10];
float valor;
int regloja;
char nome[30];
char cnpj[19];
struct data dataVenda;
} historico;

void aloca(loja **p_loja, montadora **p_mont, historico **p_hist, int tam, int escolha);
int verifica(loja **p_loja, montadora **p_mont, historico **p_hist, int escolha);

//Concessionária
void cadastro_conc(loja *p, int qtde); 
void cadastro_dados(loja *p);
void grava_conc(loja *p);
void mostra_conc(loja *p, int qtde);
void busca_conc(loja *p, int qtde);

//Carros
void cadastro_carro(montadora *p, int qtde);
void grava_carro(montadora *p, int qtde);
void mostra_carro(montadora *p, int qtde);
void busca_carro(montadora *p, int qtde);

//Reserva/Vendas
void reservas(loja *p_loja, montadora *p_mont, int qtde, int qtde_carro);

main()
{
	setlocale(LC_ALL, "portuguese");

	loja *ploja = NULL;
	montadora *pmontadora = NULL;
	historico *phistorico = NULL;

char op, opcao_conc, opcao_carros, op_continuar, op_cont, op_reservas;
int qtde, qtde_carro, qtde_hist;

	aloca(&ploja, &pmontadora, &phistorico, 1, 1);
	aloca(&ploja, &pmontadora, &phistorico, 1, 2);
	aloca(&ploja, &pmontadora, &phistorico, 1, 3);
	
	do{
		qtde = verifica(&ploja, &pmontadora, &phistorico, 1); 
		qtde_carro = verifica(&ploja, &pmontadora, &phistorico, 2);
		qtde_hist = verifica(&ploja, &pmontadora, &phistorico, 3);
		
		system("cls");
		
		printf("MENU - PRINCIPAL\n\n[1] CONCESSIONÁRIA\n[2] MONTADORA\n[3] RESERVA/VENDAS\n[4] SAIR\n\nDigite a opção desejada: ");
		scanf("%i", &op);
		fflush(stdin);
		
		switch(op)
		{
			case 1: do{
				system("cls");
				printf("MENU - CONCESSIONÁRIA\n\n[1] CONSULTA TOTAL\n[2] CONSULTA PARCIAL\n[3] REGISTRAR NOVA CONCESSIONÁRIA\n[4] VOLTAR AO MENU PRINCIPAL\n\nDigite a opção desejada: ");
				scanf("%i", &opcao_conc);
				fflush(stdin);
				
				qtde = verifica(&ploja, &pmontadora, &phistorico, 1);
				
				switch(opcao_conc)
				{
					case 1: mostra_conc(ploja, qtde);
						system("pause");
						break;
						
					case 2: busca_conc(ploja, qtde);
						system("pause");
						break;
						
					case 3: do{
            			if(qtde >= 5) //quantidade máxima = 5
           				 {
                			printf("Não há mais espaço para o registro de concessionárias, o limite foi atingido!\n");
                			system("pause");
                			break;
            			 }
            			else
            				cadastro_conc(ploja, (qtde++)+1);
            			
            			printf("\nDeseja continuar cadastrando? <S/N>: ");
            			scanf("%c", &op_continuar);
            			fflush(stdin);
            			} while(op_continuar != 'n' && op_continuar != 'N');
            			
        				mostra_conc(ploja, qtde);
            			break;
            			
            			case 4: 
            			break;
				
				default: printf("\nOpção inválida, tente novamente!");
				system("pause");
						break;
			}
			} while(opcao_conc != 4);
						break;
						
			case 2: do{
				system("cls");
				printf("MENU - MONTADORA\n\n[1] CONSULTA TOTAL\n[2] CONSULTA PARCIAL\n[3] REGISTRAR NOVO CARRO\n[4] VOLTAR AO MENU PRINCIPAL\n\nDigite a opção desejada: ");
				scanf("%i", &opcao_carros);
				fflush(stdin);
				
				qtde_carro = verifica(&ploja, &pmontadora, &phistorico, 2);
				
				switch(opcao_carros)
				{
					case 1:	mostra_carro(pmontadora, qtde_carro);
						break;
						
					case 2:	busca_carro(pmontadora, qtde_carro);
						break;	
						
					case 3: do
					{
                	if(qtde_carro >= 50)  //quantidade máxima = 50
                	{
                    	printf("Não há mais espaço para o registro de carros, o limite foi atingido!\n");
                    	system("pause");
                    	break;
                	}
                	cadastro_carro(pmontadora, (qtde_carro++)+1);
                	printf("\nDeseja continuar cadastrando? <S/N>: ");
                	scanf("%c", &op_cont);
                	fflush(stdin);
                	
                } while(op_cont != 'n' && op_cont != 'N');
                
                mostra_carro(pmontadora, qtde_carro);
                break;
            
            	case 4: 
            	break;

            	default: printf("Opção inválida, tente novamente\n\n");
            	system("pause");
            	break;
        	}
			} while(opcao_carros != 4);
				break;
			
			case 3: 
				if(qtde == 0)
        		{
            	printf("\nImpossível de realizar reservas/vendas, pois não há registro de concessionárias!\n\n");
            	system("pause");
            	break;
        		}
        		else if(qtde_carro == 0)
        		{
            		printf("\nImpossível de realizar reservas/vendas, pois não há registro de carros!\n\n");
            		system("pause");
            		break;
        		} 
        do
        {
            system("cls");
            printf("RESERVAS/VENDAS\n\n[1] RESERVAS\n[2] VENDAS\n[3] VOLTAR AO MENU PRINCIPAL\n\n");
            scanf("%i", &op_reservas);
            fflush(stdin);

            switch(op_reservas)
            {
            case 1: reservas(ploja, pmontadora, qtde, qtde_carro);
            break;

            case 2:	
            system("pause");
            break;

            case 3:
            break;

            default: printf("Opção inválida, tente novamente!\n\n");
            	system("pause");
            	break;
            }
        }while(op_reservas != 3);
        	break;
			
		case 4:
		break;
			default: printf("Opção inválida, tente novamente!\n\n");
        	system("pause");
        	break;
		} 
	} while(op != 4);	
}

void aloca(loja **p_loja, montadora **p_mont, historico **p_hist, int tam, int escolha)
{
	if(escolha == 1) //entrou na parte da loja
  	{
 		if((*p_loja=(loja*)realloc(*p_loja, tam*sizeof(loja))) == NULL)
     	exit(1);
  	}
  
	else if (escolha == 2) //entrou na parte da montadora
	{
		if((*p_mont=(montadora*)realloc(*p_mont, tam*sizeof(montadora))) == NULL)
      	exit(1);
    }
    else //entrou na parte do histórico
    {
    	if((*p_hist=(historico*)realloc(*p_hist, tam*sizeof(historico))) == NULL)
      	exit(1);
	}
}

int verifica(loja **p_loja, montadora **p_mont, historico **p_hist, int escolha)
{
FILE *fptr = NULL;
long int cont = 0;
	
if(escolha == 1)
	{
		if((fptr = fopen("concessionaria.bin", "rb")) == NULL)
		return cont;
		
		else
		{
		fseek(fptr, 0, 2); //posiciona o fptr no fim do arquivo
		cont = ftell(fptr)/sizeof(loja); 
		fclose(fptr);     //dentro do else por conta do rb
		return cont; 
		}
	}
	
else if(escolha == 2)
{
	if((fptr = fopen("carro.bin", "rb")) == NULL)
      return cont;
      
    else
      {
        fseek(fptr, 0, 2);   // posiciona fptr no fim do arquivo
        cont = ftell(fptr)/sizeof(montadora); 
        fclose(fptr);    // dentro do else - por conta rb 
        return cont;
      }
}
else
{
	if((fptr=fopen("historico.bin","rb"))==NULL)
    return cont;
    	else
      	{
        fseek(fptr,0,2);   // posiciona fptr no final do arquivo
        cont=ftell(fptr)/sizeof(historico);
        fclose(fptr);    // dentro do else - por conta rb 
        return cont;
      	}
}
}

void cadastro_conc(loja *p, int qtde)
{
int i;
	
	p->regloja = qtde;
	
	system("cls");
	printf("N° Registro: %i", p->regloja);
	
	printf("\n\nDigite o nome: ");
	gets(p->nome);
	fflush(stdin);

	printf("Digite o CNPJ (Ex: 11.444.777/0001-61): ");
	gets(p->CNPJ);
	fflush(stdin);

	cadastro_dados(p);
	fflush(stdin);

	p->sold = 0;
	p->reserved = 0;
	for(i=0; i<3; i++)
	{
		p->tabela[i].sigla = 'L';
	}

	grava_conc(p);
}

void cadastro_dados(loja *p)
{
	printf("Digite o logradouro: ");
	gets(p->end.logradouro);
	fflush(stdin);

	printf("Digite o bairro: ");
	gets(p->end.bairro);
	fflush(stdin);

	printf("Digite o CEP: ");
	gets(p->end.CEP);
	fflush(stdin);

	printf("Digite a cidade: ");
	gets(p->end.cidade);
	fflush(stdin);

	printf("Digite a UF (ex: SP): ");
	gets(p->end.estado);
	fflush(stdin);

	printf("Digite o telefone: ");
	gets(p->end.fone);
	fflush(stdin);

	printf("Digite o e-mail: ");
	gets(p->end.email);
	fflush(stdin);
}

void grava_conc(loja *p)
{
FILE *fptr = NULL;

if((fptr = fopen("concessionaria.bin", "ab")) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
	fwrite(p, sizeof(loja), 1, fptr);
	
fclose(fptr); //fora do else por conta do ab
}

void mostra_conc(loja *p, int qtde)
{
int i, j;
FILE *fptr = NULL;

system("cls");

if((fptr = fopen("concessionaria.bin", "rb")) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
{
	for(i=0; i<qtde; i++)
	{
		fseek(fptr, i*sizeof(loja), 0);
		fread(p, sizeof(loja), 1, fptr);
		printf("Nome: %s\nRegistro: %i\n\nCNPJ: %s\nLogradouro: %s\nBairro: %s\nCEP: %s\nCidade: %s\nEstado (UF): %s\nTelefone: %s\nEmail: %s\nSold: %i\nReserved: %i\n",p->nome, p->regloja, p->CNPJ, p->end.logradouro, p->end.bairro, p->end.CEP, p->end.cidade, p->end.estado, p->end.fone, p->end.email, p->sold, p->reserved);
	for(j=0; j<3; j++)
	{
		if(p->tabela[j].sigla == 'L')
		printf("Tabela %i = %c\n", j, (p->tabela[j].sigla));
		else
		printf("Tabela %i = %c - %i\n", j, (p->tabela[j].sigla), (p->tabela[j].reservado.regcarro));
	}
	printf("\n\n");
	fclose(fptr);
}
system("pause");
}
}

void busca_conc(loja *p, int qtde)
{
FILE *fptr=NULL;

int i, j, achou=0;
char p_cnpj[30];

system("cls");

if((fptr = fopen("concessionaria.bin", "rb")) == NULL)
  printf("\nErro ao abrir o arquivo");
  
else
{
    for(i=0; i<qtde; i++)
    {
        fseek(fptr, i*sizeof(loja), 0);
        fread(p, sizeof(loja), 1, fptr);
        printf("Registro - %i\nCNPJ - %s\n", p->regloja, p->CNPJ);
    }
    fclose(fptr);   //dentro do else - por conta rb
}

printf("\nDigite o CNPJ que deseja buscar: ");
gets(p_cnpj);
fflush(stdin);

if((fptr = fopen("concessionaria.bin", "rb")) == NULL)
  printf("\nErro ao abrir o arquivo"); 
  
else
  {
  	for(i=0; i < qtde; i++)
  	  {
	  	fseek(fptr, i*sizeof(loja), 0);
	  	fread(p, sizeof(loja), 1, fptr);
	  	if(strcmp(p_cnpj, p->CNPJ) == 0) //comparar cnpjs
            {
            system("cls");
            printf("CNPJ ENCONTRADO COM SUCESSO!");
            printf("\n\nNome: %s\nSold: %i\nReserved: %i\n", p->nome, p->sold, p->reserved);
            for(j=0;j<3;j++)
            {
            	if(p->tabela[j].sigla == 'L')
                printf("Tabela %i = %c\n", j, (p->tabela[j].sigla));
                else
                printf("Tabela %i = %c - %i\n", j, (p->tabela[j].sigla), (p->tabela[j].reservado.regcarro));
            	achou=1;
            }
            printf("\n\n");
            }
      }
    fclose(fptr);   //dentro do else - por conta rb (rb não tem força pra criar, então a ação de fechar só deve acontecer dentro do else, caso o arquivo exista)
  }

if(achou==0)
	{
	system("cls");
    printf("CNPJ NÃO ENCONTRADO! TENTE NOVAMENTE.\n\n");
	}	
}

void cadastro_carro(montadora *p, int qtde)
{
int i;
float preco = 0;

	p->regcarro = qtde;
	
	printf("\nN° Registro: %i", p->regcarro);
	
	printf("\nDigite o modelo do carro: ");
	gets(p->modelo);
	fflush(stdin);

	printf("\nDigite a cor do carro: ");
	gets(p->cor);
	fflush(stdin);

	printf("\nDigite o preço do carro: ");
	scanf("%f", &preco);
	fflush(stdin);
	
	p->valor = preco;
	p->status.sigla = 'L';
	
	grava_carro(p, qtde);
}

void grava_carro(montadora *p, int qtde)
{
FILE *fptr = NULL;

	if((fptr = fopen("carro.bin", "ab")) == NULL)
		printf("\nErro ao abrir o arquivo!");
		
	else
		fwrite(p, sizeof(montadora), 1, fptr);
		
fclose(fptr); //fora do else por conta do ab
}

void mostra_carro(montadora *p, int qtde)
{
int i, j;
FILE *fptr = NULL;

system("cls");

if((fptr = fopen("carro.bin", "rb")) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
{
	for(i=0; i<qtde; i++)
	{
		fseek(fptr, i*sizeof(montadora), 0);
		fread(p, sizeof(montadora), 1, fptr);
		
	if(p->status.sigla == 'L')
	{
		printf("Registro: %i\n\nModelo: %s\nCor: %s\nValor: %.2f\nStatus: %c\n",p->regcarro, p->modelo, p->cor, p->valor, p->status.sigla);
		printf("\n\n");
	}
	else
	{
	printf("Registro: %i\nModelo: %s\nCor: %s\nValor: %.2f\nStatus: %c - %s\n",p->regcarro, p->modelo, p->cor, p->valor, p->status.reserva.sigla, p->status.reserva.CNPJ);
	printf("\n\n");
	}
	}
	fclose(fptr);
}
system("pause");	
}

void busca_carro(montadora *p, int qtde)
{
FILE *fptr=NULL;

int i, j, encontrou=0;
char p_status;

system("cls");

printf("Digite o status que deseja buscar [L = Livre, R = Reservado]: ");
scanf("%c", &p_status);
p_status = toupper(p_status);
fflush(stdin);

if((fptr = fopen("carro.bin", "rb")) == NULL)
  printf("\nErro ao abrir o arquivo"); 
  
else
  {
  	for(i=0; i<qtde; i++)
  	  {
	  	fseek(fptr, i*sizeof(montadora), 0);
	  	fread(p, sizeof(montadora), 1, fptr);
	  	
		if(p->status.sigla == p_status)
            {
            	printf("\nSTATUS ENCONTRADO COM SUCESSO!");
            	printf("\nN°Registro: %i\nModelo: %s\nCor: %s\nValor: %.2f\nStatus: %c\n", p->regcarro, p->modelo, p->cor, p->valor, p->status.sigla);
            	encontrou = 1;
			}
      }
    fclose(fptr);   //dentro do else - por conta rb (rb não tem força pra criar, então a ação de fechar só deve acontecer dentro do else, caso o arquivo exista)
  }

if(encontrou == 0)
{
printf("\nSTATUS NÃO ENCONTRADO!");
}
printf("\n");
system("pause");
}

void reservas(loja *p_loja, montadora *p_mont, int qtde, int qtde_carro)
{
FILE *fptr_conc = NULL;
FILE *fptr_mont = NULL;

int i, j, k, reserva=0, reserva_carro=0, reg_carro=0, final=0, posicao = 0, posicao_carro=0;
char p_cnpj[19], aux_conc[30], aux_modelo[20], aux_cor[10], aux_sigla, confirmar_reserva; //criar variáveis auxiliares para ajudar a ficar mais fácil e a imprimir na tela

do{
system("cls");
    if((fptr_conc = fopen("concessionaria.bin", "rb")) == NULL) 
          printf("\nErro ao abrir o arquivo");
    else
    {
        for(i=0; i<qtde; i++)
            {
                fseek(fptr_conc, i*sizeof(loja), 0);
                fread(p_loja, sizeof(loja), 1, fptr_conc);
                printf("Registro: %i ---- CNPJ: %s\n\n", p_loja->regloja, p_loja->CNPJ);
            }
            fclose(fptr_conc);   //dentro do else - por conta rb
    }
printf("Digite o CNPJ da concessionária para realizar a reserva: ");
gets(p_cnpj);
fflush(stdin);

if((fptr_conc = fopen("concessionaria.bin", "rb")) == NULL)
    printf("\nErro ao abrir o arquivo");
          
else
{
	for(i=0; i<qtde; i++)
    	{
        	fseek(fptr_conc, i*sizeof(loja), 0);
            fread(p_loja, sizeof(loja), 1, fptr_conc);
                if(strcmp(p_cnpj, p_loja->CNPJ) == 0)
                    {
                    system("cls");
                    printf("CNPJ ENCONTRADO!\n\nNome: %s\nSold: %i\nReserved: %i\n", p_loja->nome, p_loja->sold, p_loja->reserved);
					for(j=0;j<3;j++)
                    {
                        if(p_loja->tabela[j].reservado.sigla == 'L')
                            printf("Tabela %i = %c\n", j, p_loja->tabela[j].sigla);
                        else
                            printf("Tabela %i = %c - %i\n", j, p_loja->tabela[j].reservado.sigla, p_loja->tabela[j].reservado.regcarro);
					}
					system("pause");
                    reserva = 1;
                    strcpy(aux_conc, p_loja->nome); //copiar o nome para a auxiliar
                    }
        }
            fclose(fptr_conc);   //dentro do else - por conta rb
}
if(reserva == 0)
{
	printf("\nCNPJ NÃO ENCONTRADO, TENTE NOVAMENTE!\n");
    system("pause");
}
} while(reserva == 0);

do
{
	system("cls");
	
	printf("Digite o registro do carro para realizar a reserva: ");
	scanf("%i", &reg_carro);
	fflush(stdin);
	
	if((fptr_mont = fopen("carro.bin","rb")) == NULL) 
          printf("\nErro ao abrir o arquivo");
    else
    {
    	for(i=0; i<qtde_carro; i++)
        {
            fseek(fptr_mont, i*sizeof(montadora), 0);
            fread(p_mont, sizeof(montadora), 1, fptr_mont);
            if(p_mont->regcarro == reg_carro)
            {
            	system("cls");
                printf("REGISTRO DE CARRO ENCONTRADO!\nModelo: %s\nCor: %s\nValor: R$%.2f\nStatus: %c\n\n",p_mont->modelo, p_mont->cor, p_mont->valor, p_mont->status.sigla);
				reserva_carro = 1;
                strcpy(aux_modelo, p_mont->modelo);
                strcpy(aux_cor, p_mont->cor);
                aux_sigla = p_mont->status.sigla;
                
                posicao_carro = i;
                i = qtde_carro;
            }
        }
            fclose(fptr_mont); //dentro do else - por conta rb
    }
    if(reserva_carro == 0)
        printf("\nCARRO NÃO ENCONTRADO, TENTE NOVAMENTE!\n");
    else
    {
        printf("Deseja confirmar a reserva do carro? <S/N>: ");
        scanf("%c", &confirmar_reserva);
        fflush(stdin);
        switch(confirmar_reserva)
        {
        		case 'n':
				case 'N': system("cls");
        		printf("RESERVA CANCELADA COM SUCESSO!");
        		break;
        		
        		case 's':
        		case 'S':
				if((fptr_conc = fopen("concessionaria.bin","rb")) == NULL)
                  printf("\nErro ao abrir o arquivo");
                else
				{
				for(i=0; i<qtde; i++)
            	{
                	fseek(fptr_conc, i*sizeof(loja), 0);
                	fread(p_loja, sizeof(loja), 1, fptr_conc);
                	if(strcmp(p_cnpj, p_loja->CNPJ) == 0)
                	{
                		if(strcmp(aux_cor,"vago") == 0)
                		{
                			printf("Carro já vendido, tente novamente!\n\n");
                			fclose(fptr_conc);
                			reserva_carro = 1;
                			break;
						}
                		if(aux_sigla == 'R')
                		{
                			printf("\nCarro já reservado, tente novamente!\n\n");
                			fclose(fptr_mont);
                			reserva_carro = 1;
                			break;
						}
						else if(p_loja->reserved >= 3) //atingiu o limite máximo
						{
							printf("\nQuantidade máxima de reserva atingida!\n\n");
							fclose(fptr_conc);
							reserva_carro = 1;
							break;
						}
						p_loja->reserved += 1; //incrementando em reserva
						posicao = i;
						i = qtde;
						
						for(k=0; k<3; k++) //3 = número total de reservas
						{
							if(p_loja->tabela[k].sigla = 'L')
							{
								p_loja->tabela[k].reservado.sigla = 'R'; //trocando de livre para reservado
								p_loja->tabela[k].reservado.regcarro = reg_carro;
								k = 3; //acabando for
							}
						}
						system("cls");
						printf("Reserva concluída com sucesso!");
						printf("\n\nNome: %s\nSold: %i\nReserved: %i\n", p_loja->nome, p_loja->sold, p_loja->reserved);
						for(j=0;j<3;j++)
                    	{
                        	if(p_loja->tabela[j].reservado.sigla == 'L')
                            	printf("Tabela %i = %c\n", j, p_loja->tabela[j].sigla);
                        	else
                            	printf("Tabela %i = %c - %i\n", j, p_loja->tabela[j].reservado.sigla, p_loja->tabela[j].reservado.regcarro);
						} //for interno
                	} //if externo
				} //for
				fclose(fptr_mont); //fora do for
				}//else
				
				if((fptr_mont = fopen("carro.bin","rb+")) == NULL)
                  printf("\nErro ao abrir o arquivo");
                else
				{
				for(i=0; i<qtde_carro; i++)
            	{
                	fseek(fptr_mont, i*sizeof(montadora), 0);
                	fread(p_mont, sizeof(montadora), 1, fptr_mont);
                	p_mont->status.reserva.sigla = 'R';
                	strcpy(p_mont->status.reserva.CNPJ, p_cnpj); 
                }
                fclose(fptr_mont);		
								
				if((fptr_conc = fopen("concessionaria.bin", "rb+")) == NULL)
					printf("\nErro ao abrir o arquivo!");
				else
				{
					fseek(fptr_conc, posicao*sizeof(loja), 0);
					fwrite(p_loja, sizeof(loja), 1, fptr_conc);
				}
				fclose(fptr_conc);
				
				if((fptr_mont = fopen("carro.bin", "rb+")) == NULL)
					printf("\nErro ao abrir o arquivo!");
				else
				{
					fseek(fptr_mont, posicao_carro*sizeof(montadora), 0);
					fwrite(p_mont, sizeof(montadora), 1, fptr_mont);
				}
				fclose(fptr_mont);
				
				break;
				
				default: printf("Opção inválida, tente novamente\n\n");
            	system("pause");
            	break;
				}
		}
	}
}while(reserva_carro == 0);
system("pause");
}
