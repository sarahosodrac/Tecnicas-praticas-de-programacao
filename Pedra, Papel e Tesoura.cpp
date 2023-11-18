// Problema: Faça um programa que simule um jogo de pedra/papel/tesoura. O programa deverá perguntar qual a
// jogada de cada um dos participantes, informando o vencedor, ou repetindo a pergunta no caso de empate,
// até que haja um vencedor.
//***********************************

#include <iostream>

#include <stdlib.h>
#include <locale.h>
#include <ctime>

using namespace std;

int main ()

{
setlocale(LC_ALL,"portuguese"); // COMANDO DA BIBLIOTECA
LOCALE.H (ELA POSSIBILITA A UTILIZAÇÃO DE CARACTERES EM PORTUGUÊS

// DEFINIÇÃO DE CONSTANTES E VÁRIAVEIS

const int pedra = 1;
const int papel = 2;
const int tesoura = 3;
int escolha1;
int escolha2;
int ganhador;

do{

cout << "------------------------------------------------------
------------------------- " <<endl;
cout << " PEDRA, PAPEL E TESOURA
" <<endl;

cout << "--------------------------------------------------------
----------------------- " <<endl;
cout << " OS SEGUINTES VALORES CORRESPONDEM A 1-> PEDRA 2-
> PAPEL 3->TESOURA " <<endl;
cout << "--------------------------------------------------------
----------------------- " <<endl;

//ENTRADA DE DADOS

cout<< endl << " Start-se jogador1: ";
cin>>escolha1;
cout<< endl << " Start-se jogador2: ";
cin>>escolha2;

// PROCESSAMENTO DOS DADOS DE SAÍDA

if(escolha1 == pedra){
if(escolha2 == papel){

cout << endl << "Parabéns jogador 2, você ganhou! Jogador 1,
não foi dessa vez!" << endl;
ganhador = 1;
}

else if(escolha2 == tesoura){

cout << endl << "Parabéns jogador 1, você ganhou! Jogador 2,
não foi dessa vez!" << endl;

ganhador = 1;
}
else{

cout << endl << "Empate? No start-se só pode haver um
vencedor!" << endl; //Loop para empate
ganhador = 0;
}
}
else if(escolha1 == tesoura){
if(escolha2 == pedra){

cout << endl << "Parabéns jogador 2, você ganhou! Jogador 1,
não foi dessa vez!" << endl;
ganhador = 1;

}
else if(escolha2 == papel){

cout << endl << "Parabéns jogador 1, você ganhou! Jogador 2,
não foi dessa vez!" << endl;
ganhador = 1;
}

else{
cout << endl << "Empate? No start-se só pode haver um
vencedor!" << endl; //Loop para empate
ganhador = 0;
}
}

else if(escolha1 == papel){
if(escolha2 == pedra){

cout << endl << "Parabéns jogador 1, você ganhou! Jogador 2, não
foi dessa vez!" << endl;
ganhador = 1;
}

else if(escolha2 == tesoura){

cout << endl << "Parabéns jogador 2, você ganhou! Jogador 1, não
foi dessa vez!" << endl;
ganhador = 1;

}
else{

cout << endl << "Empate? No start-se só pode haver um vencedor!"
<< endl; //Loop para empate
ganhador = 0;

}
}
cout << endl;
}while(ganhador == 0); //Loop para empate
return 0;
}