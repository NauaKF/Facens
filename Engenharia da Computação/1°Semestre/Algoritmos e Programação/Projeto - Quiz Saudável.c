#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL, "portuguese");

char resp;
char nome[40];
int a=3, b=2, c=1, d=0, total, valor_f;
int controle = 1;

do
{
total = 0;

printf("  ============================================================================================================\n\n");
system("color 1");
printf("  XX        XX  XXXXXXXXXXX  XXXXXXXXXXXXX  XX     XXXXXXXXXXXXXXX  XX        XX  XX  XXXXXXXXXXX  XXXXXXXXX\n");
Sleep(350);
system("color 2");
printf("  XX        XX  XXXXXXXXXXX  XXXXXXXXXXXXX  XX     XXXXXXXXXXXXXXX  XX        XX  XX  XXXXXXXXXXX  XXXXXXXXXX\n");
Sleep(350);
system("color 3");
printf("  XX        XX  XX           XX         XX  XX           XX         XX        XX  XX  XX           XX      XX\n");
Sleep(350);
system("color 6");
printf("  XX        XX  XX           XX         XX  XX           XX         XX        XX  XX  XX           XX      XX\n");
Sleep(350);
system("color 8");
printf("  XXXXXXXXXXXX  XXXXXXXXXXX  XXXXXXXXXXXXX  XX           XX         XXXXXXXXXXXX  XX  XXXXXXXXXXX  XXXXXXXXX\n");
Sleep(350);
system("color 4");
printf("  XXXXXXXXXXXX  XXXXXXXXXXX  XXXXXXXXXXXXX  XX           XX         XXXXXXXXXXXX  XX  XXXXXXXXXXX  XXXXXXXXX\n");
Sleep(350);
system("color 7");
printf("  XX        XX  XX           XX         XX  XX           XX         XX        XX  XX  XX           XX    XX\n");
Sleep(350);
system("color 5");
printf("  XX        XX  XX           XX         XX  XX           XX         XX        XX  XX  XX           XX     XX\n");
Sleep(350);
system("color 9");
printf("  XX        XX  XXXXXXXXXXX  XX         XX  XXXXXXXXXXX  XX         XX        XX  XX  XXXXXXXXXXX  XX      XX\n");
Sleep(350);
system("color A");
printf("  XX        XX  XXXXXXXXXXX  XX         XX  XXXXXXXXXXX  XX         XX        XX  XX  XXXXXXXXXXX  XX       XX\n\n");
printf("  ============================================================================================================\n");
Sleep(2000);
system("cls");
printf("LOADING.");
Sleep(200);
system("cls");
printf("\LOADING..");
Sleep(200);
system("cls");
printf("LOADING...");
Sleep(200);
system("cls");
printf("LOADING.");
Sleep(200);
system("cls");
printf("LOADING..");
Sleep(200);
system("cls");
printf("LOADING...");
Sleep(200);

inicio:
system("cls");
system("color 7");
printf ("INFORME O NOME DO PARTICIPANTE E DIGITE \"ENTER\".\n");
printf ("\nNOME DO PARTICIPANTE: ");
gets(nome);
system("cls");
printf ("SEJA BEM VINDO \"%s!\"\n\n", strupr(nome));
printf ("ESTE É UM QUIZ SOBRE HÁBITOS SAUDÁVEIS.\n");
printf ("VOCÊ DEVERÁ RESPONDER 10 PERGUNTAS SOBRE VOCÊ, DE ACORDO COM ALTERNATIVAS!\n");
printf ("APÓS CONCLUÍDO, RECEBERÁ UM FEEDBACK SOBRE SEUS HÁBITOS SAUDÁVEIS.\n\n");
printf ("PRESSIONE \"ENTER\" PARA CONTINUAR!\n");
getch();

pergunta1: 
system("cls");
printf("LOADING.");
Sleep(200);
system("cls");
printf("LOADING..");
Sleep(200);
system("cls");
printf("LOADING...");
Sleep(200);
system("cls");
printf("LOADING.");
Sleep(200);
system("cls");
printf("LOADING..");
Sleep(200);
system("cls");
printf("LOADING...");
Sleep(200);
system("cls");
system("color 4");
printf("================================================================\n");
printf("         COM QUE FREQUÊNCIA VOCÊ COME FAST FOODS? \n");
printf("================================================================");
printf("\nA) NUNCA\nB) RARAMENTE\nC) FREQUENTEMENTE\nD) SEMPRE\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta1;
} //switch

pergunta2: 
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 3");
printf("================================================================\n");
printf("       COM QUE FREQUÊNCIA VOCÊ COME FRUTAS E VERDURAS? \n");
printf("================================================================");
printf("\nA) SEMPRE\nB) FREQUENTEMENTE\nC) RARAMENTE\nD) NUNCA\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta2;
} //switch

pergunta3:
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 6");
printf("================================================================\n");
printf(" COM QUE FREQUÊNCIA VOCÊ DORME EM TORNO DE OITO HORAS POR DIA? \n");
printf("================================================================");
printf("\nA) SEMPRE\nB) FREQUENTEMENTE\nC) RARAMENTE\nD) NUNCA\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta3;
} //switch

pergunta4: 
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 7");
printf("================================================================\n");
printf("          COM QUE FREQUÊNCIA VOCÊ REALIZA EXERCÍCIOS? \n");
printf("================================================================");
printf("\nA) SEMPRE\nB) FREQUENTEMENTE\nC) RARAMENTE\nD) NUNCA\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta4;
} //switch

pergunta5:
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color A");
printf("================================================================\n");
printf("          QUANTOS LITROS DE ÁGUA VOCÊ TOMA POR DIA? \n");
printf("================================================================");
printf("\nA) MAIS DE 2 LITROS\nB) ENTRE 1 E 2 LITROS\nC) MENOS DE 1 LITRO\nD) NÃO BEBO MUITA ÁGUA\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta5;
} //switch

pergunta6: 
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color B");
printf("================================================================\n");
printf("               COMO FUNCIONA SUA DIETA DIÁRIA? \n");
printf("================================================================");
printf("\nA) BEM BALANCEADA, RICA EM NUTRIENTES E BEM DIVERSIFICADA\nB) SAUDÁVEL, PORÉM POUCO DIVERSIFICADA\nC) TENTO ME MANTER SAUDÁVEL, PORÉM SEMPRE DESLIZO\nD) COMO O QUE VEJO PELA FRENTE\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta6;
} //switch

pergunta7: 
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color E");
printf("================================================================\n");
printf("              VOCÊ VAI AO MÉDICO REGULARMENTE? \n");
printf("================================================================");
printf("\nA) SIM, TENHO UM MÉDICO QUE ME ACOMPANHA SEMPRE\nB) FAÇO EXAMES ANUAIS\nC) SÓ QUANDO SINTO ALGUM SINTOMA\nD) NÃO VOU AO MÉDICO\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta7;
} //switch

pergunta8:
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 9");
printf("================================================================\n");
printf("                VOCÊ É UMA PESSOA ESTRESSADA? \n");
printf("================================================================");
printf("\nA) SINTO QUE SOU UMA PESSOA CALMA\nB) ESTOU SEMPRE BUSCANDO MANEIRAS PARA MELHORAR MEU BEM ESTAR\nC) ME ESTRESSO COM FREQUÊNCIA\nD) VIVO ESTRESSADO/ANGUSTIADO\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta8;
} //switch

pergunta9:
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 2");
printf("================================================================\n");
printf("       COM QUE FREQUÊNCIA VOCÊ CONSOME BEBIDAS ALCOOLICAS? \n");
printf("================================================================");
printf("\nA) NÃO BEBO BEBIDAS ALCOOLICAS\nB) OCASIONALMENTE\nC) TODOS OS FINS DE SEMANA\nD) NÃO TENHO DIAS CERTOS E SEMPRE EM GRANDES QUANTIDADES\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta9;
} //switch

pergunta10:
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA.");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA..");
Sleep(200);
system("cls");
printf("ARMAZENANDO RESPOSTA...");
Sleep(200);
system("cls");
system("color 8");
printf("================================================================\n");
printf("                        VOCÊ FUMA? \n");
printf("================================================================");
printf("\nA) NUNCA FUMEI\nB) SOU EX-FUMANTE\nC) FUMO MENOS DE 10 CIGARROS POR DIA\nD) FUMO MAIS DE 10 CIGARROS POR DIA\n\n");
scanf("%c", &resp);
fflush(stdin);
switch(resp)
{
	case 'a': case 'A': total+=3;
			break;
	case 'b': case 'B': total+=2;
			break;
	case 'c': case 'C': total+=1;
			break;
	case 'd': case 'D': total+=0;
			break;
			
	default: printf("ALTERNATIVA INVÁLIDA, TENTE NOVAMENTE!");
	getch();
	goto pergunta10;
} //switch
system("cls");
printf("FINALIZANDO O QUIZ.");
Sleep(200);
system("cls");
printf("FINALIZANDO O QUIZ..");
Sleep(200);
system("cls");
printf("FINALIZANDO O QUIZ...");
Sleep(200);
system("cls");
printf("FINALIZANDO O QUIZ.");
Sleep(200);
system("cls");
printf("FINALIZANDO O QUIZ..");
Sleep(200);
system("cls");
printf("FINALIZANDO O QUIZ...");
Sleep(200);
system("cls");
system("color 4");
printf("================================================================\n");
printf("                   DESEJA REFAZER O QUIZ?\n");
printf("================================================================\n");
printf("[1] SIM\n[2] NÃO\n\n");
scanf("%i", &controle);
fflush(stdin);

if(controle == 1)
goto inicio;

else if (controle == 2)
goto fim;

} while (controle != controle);

fim:
if(total > 19)
{
system("color 7");
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
system("color 2");
printf("================================================================\n");
printf("=                     PONTUAÇÃO FINAL = %i                     =\n", total);
printf("================================================================\n\n");
printf(" \"%s\" - MUITO BEM! VOCÊ TEM UMA ROTINA EXCELENTE E SAUDÁVEL E ESTÁ FAZENDO UM ÓTIMO TRABALHO!\n\n", strupr(nome));
}
else if(total > 9 && total < 21)
{
system("color 7");
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
system("color 6");
printf("================================================================\n");
printf("=                     PONTUAÇÃO FINAL = %i                     =\n", total);
printf("================================================================\n\n");
printf(" \"%s\" - VOCÊ POSSUI UMA ROTINA SAUDÁVEL, MAS DEVERIA MELHORÁ-LA!\nCOMECE A MUDAR SEUS HAÁBITOS! RECOMENDA-SE UM ACOMPANHAMENTO MÉDICO!\n\n", strupr(nome));
}
else
{
system("color 7");
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS.");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS..");
Sleep(200);
system("cls");
printf("ANALISANDO OS RESULTADOS...");
Sleep(200);
system("cls");
system("color 4");
printf("================================================================\n");
printf("=                     PONTUAÇÃO FINAL = %i                     =\n", total);
printf("================================================================\n\n");
printf(" \"%s\" - VOCÊ POSSUI UMA ROTINA NADA SAUDÁVEL!\nMUDE SEUS HÁBITOS! RECOMENDA-SE PROCURAR UM MÉDICO ESPECIALISTA URGENTEMENTE!!!\n\n", strupr(nome));
}

system("pause");
return 0;
}
