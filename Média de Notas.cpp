// Data: 21/10/2020
// Problema: Faça um programa que leia a nota de “N” alunos (defina N como uma constante = ao final o
// programa deverá exibir a média da turma, a nota do melhor aluno, a nota do pior aluno e o número de
// aprovados (será aprovado o aluno com média igual ou maior a 6).
//********************************************************************
*************

#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

using namespace std;

int main()

{

setlocale(LC_ALL,"portuguese"); //comando da biblioteca locale.h
(PERMITE A UTILIZAÇÃO DE CARACTERES EM PORTUGUÊS)

//ENTRADA DE DADOS E DEFINIÇÃO DE CONSTANTES

const int n = 5;
const int aprovado = 6;
float menor_nota = 10;
float maior_nota = 0;
float nota, nota_de_aprovacao;
float media;
int soma = -1;
int alunos;

//Entrada de dados

for (alunos=1; alunos<=n; alunos++){ //LAÇO DE REPETIÇÃO DE
ALUNOS

cout << "--------------------------------------------------------
----------------------- " <<endl;
cout << " PROGRAMA DE NOTAS
" <<endl;
cout << "--------------------------------------------------------
----------------------- " <<endl;

cout << "Digite a nota do aluno " << alunos << endl;
cin >> nota;
cout << endl;

while ((nota<0)||(nota>10)) //LAÇO PARA CARATER INVÁLIDO
{

cout << "Nota inválida" << endl;
cout << "Tente novamente! " << alunos << " Digite a nota do aluno
" << endl;
cin >> nota;
cout << endl;

}
//PROCESSAMENTO > E < NOTA

if (nota>=maior_nota)
{

maior_nota = nota;

}
if (nota<=menor_nota)
{

menor_nota = nota;

}

//MÉDIA

soma++;

media = (media * soma + nota) / alunos;

if (nota>=aprovado) //CÁCULO DE APROVAÇÃO
{
nota_de_aprovacao++;

}
}

// SAÍDA

cout << endl << " O número de Alunos aprovados é " <<
nota_de_aprovacao << ". A média da turma é " << media << "." <<
endl;
cout << endl << " A maior nota da turma é " << maior_nota << " e a
menor nota da turma é " << menor_nota;

return 0;
}