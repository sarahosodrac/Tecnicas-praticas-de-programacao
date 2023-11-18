//Data: 21/10/2020
// Problema: Dois corredores iniciam uma disputa, faça um programa que leia tamanho do percurso (em metros), e o
//tempo que cada um deles levou para concluir a corrida (em segundos). O programa deve informar:
//a) o vencedor;
//b) a velocidade média do vencedor (em m/s);
//***********************************

#include <iostream>
#include <locale.h>

using namespace std;

int main()

{
setlocale(LC_ALL,"portuguese"); // COMANDO DA BIBLIOTECA
LOCALE.H (ELA POSSIBILITA A UTILIZAÇÃO DE CARACTERES EM PORTUGUÊS

float tamanho;
float tempo1;
float tempo2;

cout << "------------------------------------------------------
------------------------- " <<endl;
cout << " START-SE
" <<endl;
cout << "--------------------------------------------------------
----------------------- " <<endl;

cout << endl << " Olá, meu nome é start-se, sou um programa
avaliador. " << endl;
cout << endl << " Os olhos mentem, mas a matemática não. Vamos
ver quem ganhou! " << endl;
cout << endl << "-----------------------------------------------
-------------------------------- " <<endl;
cout << endl << " Quantos metros tinha o percurso? ";
cin >> tamanho;
cout << endl << " Quantos segundos levou o corredor 1? ";
cin >> tempo1;
cout << endl << "Quantos segundos levou o corredor 2? ";
cin >> tempo2;

while ((tamanho<1)||(tempo1<1)||(tempo2<1)) // LAÇO DE REPETIÇÃO
( REPETE AS OPÇÕES CASO HAJA UM CARACTERE INVÁLIDO )

{

cout << endl << "-----------------------------------------
-------------------------------------- " <<endl;
cout << endl << " OPÇÃO INVÁLIDA!" << endl;
cout << endl << " Quantos metros tinha o percurso? ";
cin >> tamanho;
cout << endl << " Quantos segundos levou o corredor 1? ";
cin >> tempo1;
cout << endl << "Quantos segundos levou o corredor 2? ";
cin >> tempo2;
cout << endl << "-----------------------------------------
-------------------------------------- " <<endl;
}

if (tempo1>tempo2)

{

cout << endl << " Jogador 2 ganhou, percorrendo uma
velocidade média de" << tamanho/tempo2 << "m/s"; // CÁCULO DENTRO
DO COUT ->

// CALCULA A VELOCIDADE MÉDIA

}

if (tempo2>tempo1)

{

cout << " jogador 1 ganhou, percorrendo uma velocidade

média de " << tamanho/tempo1 << "m/s";

}

if (tempo1==tempo2)

{

cout << endl << "Empate! os jogadores empataram
percorrendo uma velocidade média de " << tamanho/tempo1 << "m/s";

}

return 0;
}