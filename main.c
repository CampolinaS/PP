#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Tcliente
{
  int codigo,telefone,dataNasci;
  char nome[50],endereco[50];
}
typedef struct Tcliente cliente;

struct Tfuncionario{
int codigo,telefone;
char nome[50],funcao[50],tipo[10];
float salario;
}
typedef struct Tfuncionario funcionario

struct Tfornecedor{
int codigo,telefone;
char nome[50],produtoFornecido[50];
}
typedef struct Tfornecedor fornecedor

struct Tfesta
{
  // Data = Int? dataDia, dataMes, dataAno
  //Data = string? 12/12/12
int codigoFesta,codigoCliente,qntConvidados,data,horarioInicio,horarioFim;
char tema[50],diaSemana[20];
}
typedef struct Tfesta festa

struct Tcontrato
{
int numContrato,codigoFesta;
char formaPagamento[50],status[50];
float valorTotal,desconto,valorFinal;
}
typedef struct Tcontrato contrato

int main() {
  setlocale(LC_ALL, "portuguese");
  printf("Olá mundo\n");
  return 0;
}
int {
  
}