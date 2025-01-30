#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{ 
setlocale(LC_ALL, "portuguese");

float peso, altura, imc;

printf("Olá, este é um programa que calcula o seu Índice de Massa Corporal (IMC)!\n");
printf("\nPrimeiramente, digite o seu peso: ");
scanf("%f", &peso);

printf("\nDigite agora a sua altura: ");
scanf("%f", &altura); 

//verificação do IMC = kg/m²
//pow(x,y): eleva o x na potência y

imc = peso / (pow(altura,2));

if (imc < 18.5)  
printf("\nVocê está abaixo do peso correto, procure um médico e se informe mais!\n\n");

if (imc > 18.5 && imc < 25)  
printf("\nMuito bem, você está saudável, continue assim!\n\n");

if(imc > 25 && imc < 30)  
printf("\nVocê está com um sobrepeso, procure um médico e se informe mais!\n\n");

if(imc > 30 && imc < 35)  
printf("\nVocê está com Obesidade Grau 1, procure um médico e se informe mais!\n\n");

if(imc > 35 && imc < 40)  
printf("\nVocê está com Obesidade Grau 2 - Severa, procure um médico e se informe mais!\n\n");

if(imc >= 40)  
printf("\nVc esta com Obesidade Grau 3 - Morbida, procure um médico urgente e se informe mais!\n\n");

system("pause");
return 0;
}
