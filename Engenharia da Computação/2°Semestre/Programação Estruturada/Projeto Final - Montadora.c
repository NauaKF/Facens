//         Grupo 2 - AF

// Kauan da Silva Vieira - RA: 
// Kauan Fernandes Oliveira - RA: 210105
// Luiz Pereira Reis - RA: 210325
// Matheus Parizotto Martins - RA: 211067

struct endereco { 
 char logradouro[80]; 
 char bairro[15]; 
 char CEP[10]; 
 char cidade[15]; 
 char estado[3]; 
 char fone[12]; 
 char email[40]; 
}; 
 
struct infocarro { 
 char sigla; 
 int regcarro; 
}; 
 
union dadoscarro { 
 char sigla; 
 struct infocarro reservado; 
}; 
 
struct loja { 
 int regloja; //gerar automático 
 char nome[30]; 
 char CNPJ[19]; 
 struct endereco end; 
 int sold; 
 int reserved; 
 union  dadoscarro  tabela[3]; 
}; 

struct infoloja { 
 char sigla; 
 char CNPJ[19]; 
}; 
 
union dadosloja { 
 char sigla; 
 struct infoloja reserva; 
}; 
 
struct montadora    { 
 int regcarro; //gerar automático 
 char modelo[20]; 
 char cor[10]; 
 float  valor; 
 union dadosloja status; 
}; 
 
