/* NOME: QUIZ EM LINGUAGEM C
   BY: BRENNO VITOR MORAIS INACIO*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	char resp,inicio;
	char cert='s';
	char nome[40];
	int medio=0,facil=0,dificil=0,cont=0,nivel;
	int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
	int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
	int certo_3=0,errado_3=0,contp_3=1,totp_3=1;


	printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
	printf ("\nNOME DO PARTICIPANTE: ");
	gets(nome);
	system("cls");
	printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
	printf ("O jogo possui 3 niveis de dificuldade:\n\n");
	printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
	printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
	printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Boa sorte e bom jogo\n\n");
	printf ("Pressione \"enter\" para continuar...");
	getchar();system ("cls");
	dificuldade:
	printf ("*-----------------------------*\n");
	printf ("|    NIVEIS DE DIFICULDADE    |\n");
	printf ("*-----------------------------*\n");
	printf ("|  1 - NIVEL FACIL            |\n");
	printf ("|  2 - NIVEL MEDIO            |\n");
	printf ("|  3 - NIVEL DIFICIL          |\n");
	printf ("*-----------------------------*\n");
	printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
	scanf ("%d",&nivel);
	system("cls");
	switch (nivel)
	{
		case 1 :
		{
			system("cls");
			time_t tempo;struct tm *data;time(&tempo);
			data = localtime(&tempo);
			printf("*=============================================================================*\n");
			printf("|  ___   ___ ___ ___    ___ _________ ___                                     |\n");
			printf("|  XXX_  XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXX_ XXX XXX XXX    XXX XXXXXXXXX XXX                                     |\n");
			printf("|  XXXXX_XXX XXX XXX_  _XXX XXX____   XXX                                     |\n");
			printf("|  XXXXXXXXX XXX  XXX__XXX  XXXXXXX   XXX                                     |\n");
			printf("|  XXX XXXXX XXX   XXXXXX   XXX______ XXX______                               |\n");
			printf("|  XXX  XXXX XXX    XXXX    XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|  XXX   XXX XXX     XX     XXXXXXXXX XXXXXXXXX                               |\n");
			printf("|                                _________ _________ _________ ___ ___        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXXXXXXXX XXXXXXXXX XXXXXXXXX XXX XXX        |\n");
			printf("|                                XXX___    XXX___XXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX       XXX XXX        |\n");
			printf("|                                XXXXXX    XXXXXXXXX XXX______ XXX XXX______  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                XXX       XXX   XXX XXXXXXXXX XXX XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("              AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA\n\n");

			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUANTO SAO 2+2?\n");
			printf ("A) 5\n");
			printf ("B) 7\n");
			printf ("C) 4\n");
			printf ("D) 2\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("O QUE ESTA ESCRITO NA BANDEIRA DO BRASIL?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ORDEM E REGRESSO\n");
			printf ("B) ORDEM E RETROCESSO\n");
			printf ("C) ORDEM E PROGRESSO\n");
			printf ("D) PROGRESSO E ORDEM\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"c\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL O SIGNIFICADO DA PALAVRA INGLESA 'HORSE'?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) CASA\n");
			printf ("B) CAVALO\n");
			printf ("C) ELEFANTE\n");
			printf ("D) HIPOPÓTAMO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("COMO E CONHECIDO O INVENTOR DO AVIAO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) SANTOS DUMONT\n");
			printf ("B) SANTOS DUMORRO\n");
			printf ("C) SANTOS DRUMOM\n");
			printf ("D) SANTOS SILVA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL DOS ITENS ABAIXO NAO E UMA FRUTA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) LARANJA\n");
			printf ("B) MANGA\n");
			printf ("C) QUIABO\n");
			printf ("D) BANANA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL E O SATELITE NATURAL DA TERRA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) SPUTNICK\n");
			printf ("B) RUBLE\n");
			printf ("C) SOYUS\n");
			printf ("D) LUA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL DOS ESTADOS ABAIXO NAO POSSUI PRAIAS?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) RIO DE JANEIRO\n");
			printf ("B) CEARA\n");
			printf ("C) GOIAS\n");
			printf ("D) SAO PAULO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL O SIGNIFICADO DA SILGLA ONU?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ORGANIZACAO NACIONAL UNICA\n");
			printf ("B) ORDEN NACIONAL UNICA\n");
			printf ("C) ORGANIZACAO DAS NACOES UNIDAS\n");
			printf ("D) NENHUMA DAS ALTERNATIVAS\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_1++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_1++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_1=contp_1;
				contp_1=1;
				goto dificuldade;
			}
			break;
		}

		/*Inicio do nível médio*/

		case 2:
		{
			system("cls");
			printf("*=============================================================================*\n");
			printf("|  ___   ___  ___  ___    ___  _________  ___                                 |\n");
			printf("|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                                 |\n");
			printf("|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                                 |\n");
			printf("|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                           |\n");
			printf("|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|                          ___     ___  _________  ________   ___  _________  |\n");
			printf("|                          XXX_   _XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
			printf("|                          XXXX_ _XXXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                          XXXXX_XXXXX  XXX____    XXX   XXX  XXX  XXX   XXX  |\n");
			printf("|                          XXX XXX XXX  XXXXXXX    XXX    XX  XXX  XXX   XXX  |\n");
			printf("|                          XXX  X  XXX  XXX______  XXX___XXX  XXX  XXX___XXX  |\n");
			printf("|                          XXX     XXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                          XXX     XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("              AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 4 PONTOS CADA\n\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUANTOS ESTADOS POSSUI O BRASIL?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) 20 ESTADOS\n");
			printf ("B) 25 ESTADOS\n");
			printf ("C) 27 ESTADOS\n");
			printf ("D) 30 ESTADOS\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL O NOME DA ESCALA QUE MEDE A MAGNITUDE DOS TERREMOTOS?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) ESCALA RICHMOR\n");
			printf ("B) ESCALA SISMICA\n");
			printf ("C) ESCALA TERMICA\n");
			printf ("D) ESCALA RICHTER\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL E A CAPITAL DE BRASILIA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) BRASIL\n");
			printf ("B) DISTRITO NACIONAL\n");
			printf ("C) DISTRITO FEDERAL\n");
			printf ("D) PLANO PILOTO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("O ESTADO DE PERNAMBUCO ESTA LOCALIZADO EM QUAL REGIAO BRASILEIRA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) REGIAO NORTE\n");
			printf ("B) REGIAO CENTOESTEO\n");
			printf ("C) REGIAO SUDESTE\n");
			printf ("D) REGIAO NORDESTE\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL E O NOME CIENTIFICO DA CANA-DE-ACUCAR?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) CACHACA\n");
			printf ("B) RAPADURA\n");
			printf ("C) INFLORESCENCIA\n");
			printf ("D) SACCHARUM OFFICINARUM\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("COMO E CONHECIDO O INVENTOR DA LAMPADA ELETRICA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) THOMAS JEFFERSON\n");
			printf ("B) THOMAS DE AQUINO\n");
			printf ("C) THOMAS EDISOM\n");
			printf ("D) THOMAS SWAM\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL DOS ITENS ABAIXO NAO E UMA LINGUAGEM DE PROGRAMACAO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) COBOL\n");
			printf ("B) BASIC\n");
			printf ("C) SMALLTALK\n");
			printf ("D) PREVIEW\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='d')||(resp=='D'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"D\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system("cls");
			printf ("*--------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
			printf ("*--------------------------------*\n\n");
			printf ("QUAL OCEANO BANHA A COSTA BRASILEIRA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) OCEANO PACIFICO\n");
			printf ("B) OCEANO ATLANTICO\n");
			printf ("C) OCEANO GLACIAL ARTICO\n");
			printf ("D) OCEANO MERIDIONAL\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_2++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_2++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_2=contp_2;
				contp_2=1;
				goto dificuldade;
			}
			break;
		}

		/* Inicio do nível difícil */

		case 3 :
		{
			system("CLS");
			printf("*=============================================================================*\n");
			printf("|  ___   ___  ___  ___    ___  _________  ___                                 |\n");
			printf("|  XXX_  XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXX_ XXX  XXX  XXX    XXX  XXXXXXXXX  XXX                                 |\n");
			printf("|  XXXXX_XXX  XXX  XXX_  _XXX  XXX____    XXX                                 |\n");
			printf("|  XXXXXXXXX  XXX   XXX__XXX   XXXXXXX    XXX                                 |\n");
			printf("|  XXX XXXXX  XXX    XXXXXX    XXX______  XXX______                           |\n");
			printf("|  XXX  XXXX  XXX     XXXX     XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|  XXX   XXX  XXX      XX      XXXXXXXXX  XXXXXXXXX                           |\n");
			printf("|                  ________   ___  _________  ___  _________  ___  ___        |\n");
			printf("|                  XXXXXXXX   XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n");
			printf("|                  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX        |\n");
			printf("|                  XXX   XXX  XXX  XXX___     XXX  XXX        XXX  XXX        |\n");
			printf("|                  XXX    XX  XXX  XXXXXX     XXX  XXX        XXX  XXX        |\n");
			printf("|                  XXX___XXX  XXX  XXXXXX     XXX  XXX______  XXX  XXX______  |\n");
			printf("|                  XXXXXXXXX  XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                  XXXXXXXX   XXX  XXX        XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
			printf("|                                                                             |\n");
			printf("*=============================================================================*\n\n");
			printf ("            AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 6 PONTOS CADA\n\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("O QUE E UM ATOMO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) MENOR PORCAO EM QUE PODE SER DIVIDIDO UM ELEMENTO QUIMICO\n");
			printf ("B) BOLHAS QUE SAEM DA AGUA QUANDO ELA ENTRA EM EBULICAO\n");
			printf ("C) EXPLOSIVO\n");
			printf ("D) MAIOR PORCAO EM QUE PODE SER DIVIDIDO UM ELEMENTO QUIMICO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("QUEM FOI O COMPOSITOR DA MUSICA DO HINO NACIONAL BRASILEIRO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) MACHADO DE ASSIS\n");
			printf ("B) DOM PEDRO I\n");
			printf ("C) JOAQUIM OSORIO DUQUE ESTRADA\n");
			printf ("D) FRANCISCO MANOEL DA SILVA\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("NOME DO MORRO EM QUE SE ENCONTRA A ESTATUA DO CRISTO REDENTOR?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) MORRO DO PAO DE ACUCAR\n");
			printf ("B) MORRO DO CORCOVADO\n");
			printf ("C) MORRO DA GUANABARA\n");
			printf ("D) MORRO DO REDENTOR\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("QUAL E O SIGNIFICADO DA PALAVRA MISCIGENACAO?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) PESSOA INGENUA\n");
			printf ("B) MISTURA DE VARIADAS COMPILACOES LITERARIAS\n");
			printf ("C) CRUZAMENTO INTER-RACIAL\n");
			printf ("D) DOENCA QUE ATINGE A PELE\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='c')||(resp=='C'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"C\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("EM QUE ANO FOI ASSINADA A LEI AUREA QUE ABOLIU A ESCRAVATURA NO BRASIL?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) 1888\n");
			printf ("B) 1988\n");
			printf ("C) 1788\n");
			printf ("D) 1500\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='a')||(resp=='A'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"A\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("COMO E CHAMADA UMA PESSOA QUE ESCREVE COM AS DUAS MAOS?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) DESTRO\n");
			printf ("B) AMBIDESTRO\n");
			printf ("C) CANHOTO\n");
			printf ("D) ADESTRADO\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("*----------------------------------*\n");
			printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
			printf ("*----------------------------------*\n\n");
			printf ("NOME QUE RECEBE A GUERRA PELA CORRIDA ARMAMENTISTA E TECNOLOGICA?\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("A) GUERRA MUNDIAL\n");
			printf ("B) GUERRA FRIA\n");
			printf ("C) GUERRA CIVIL\n");
			printf ("D) GUERRA TOTAL\n");
			printf ("-------------------------------------------------------------------------------\n");
			printf ("Qual a resposta certa?\n");
			scanf ("%s",&resp);
			if ((resp=='b')||(resp=='B'))
			{
				printf ("Resposta correta\n");
				certo_3++;
			}
			else
			{
				printf ("Resposta errada\n");
				printf ("Resposta correta: Letra \"B\"\n");
				errado_3++;
			}
			printf ("-------------------------------------------------------------------------------\n");
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			printf ("As pergunstas deste nivel terminaram.\n");
			printf ("Deseja jogar em outro nivel (s/n)? ");
			scanf ("%s",&resp);
			if ((resp=='s')||(resp=='S'))
			{
				system ("cls");
				totp_3=contp_3;
				contp_3=1;
				goto dificuldade;
			}
			break;
		}
		default : printf ("Nivel invalido\n");
		{
			getchar();printf ("Pressione \"enter\" para continuar...");
			getchar();system ("cls");
			goto dificuldade;
		}

	}/*fechamento do 1º swhith*/

	system("cls");
	printf ("================ RESULTADOS DO JOGO =================\n");
	printf ("Participante: %s\n",nome);
	printf ("Perguntas respondidas: %d\n",totp_1-1+contp_1-1+totp_2-1+contp_2-1+totp_3-1+contp_3-1);
	printf ("Total de acertos.....: %d\n",certo_1+certo_2+certo_3);
	printf ("Total de erros.......: %d\n",errado_1+errado_2+errado_3);
	printf ("Pontuacao total......: %d\n\n",(certo_1*2)+(certo_2*4)+(certo_3*6));
	printf ("--------------------- NIVEL FACIL -------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_1-1+totp_1-1);
	printf ("Acertos..: %d\n",certo_1);
	printf ("Erros....: %d\n",errado_1);
	printf ("Pontuacao: %d\n\n",certo_1*2);
	printf ("-------------------- NIVEL MEDIO --------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_2-1+totp_2-1);
	printf ("Acertos..: %d\n",certo_2);
	printf ("Erros....: %d\n",errado_2);
	printf ("Pontuacao: %d\n\n",certo_2*4);
	printf ("------------------- NIVEL DIFICIL -------------------\n");
	printf ("Perguntas respondidas: %d\n",contp_3-1+totp_3-1);
	printf ("Acertos..: %d\n",certo_3);
	printf ("Erros....: %d\n",errado_3);
	printf ("Pontuacao: %d\n",certo_3*6);
	getchar();
	getchar();
}
