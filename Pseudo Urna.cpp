// Data: 21/10/2020
// Problema: Um funcionários é contratado para contar os votos de três candidatos disputam as
// eleições, esse funcionário irá informar ao programa UM VOTO DE CADA VEZ. Faça um programa que leia Cada voto,
// ao final o programa deverá informar o ganhador, e o percentual de votos do mesmo.
//***********************************

#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()

{

setlocale(LC_ALL,"portuguese"); //comando da biblioteca locale.h
(PERMITE A UTILIZAÇÃO DE CARACTERES EM PORTUGUÊS)

char candidato1[20];
char candidato2[20];
char candidato3[20];
float voto1,voto2, voto3;
float voto;
float total_de_votos;
int const expre = 100;
float porcentagem_candidato1;
float porcentagem_candidato2;
float porcentagem_candidato3;

cout << "------------------------------------------------------
------------------------- " <<endl;

cout << " URNA ELETRÔNICA
" <<endl;
cout << " Eleições 2020
" <<endl;
cout << "--------------------------------------------------------
----------------------- " <<endl;

cout << endl << " Digite o nome do primeiro candidato ";

cin >> candidato1;

cout << endl << " Agora digite o nome do segundo candidato ";

cin >> candidato2;

cout << endl << " Finalmente, digite o nome do terceiro candidato
";

cin >> candidato3;

cout << "---------------------------------------------------------
---------------------- " <<endl;

cout << endl << " O TURNO SERÁ INICIADO! "
<< endl;

cout << endl << "----------------------------------------------
--------------------------------- " <<endl;

do{

cout << endl << " A numeração dos candidatos será respectiva a
sua ordem." << endl;

cout << endl << " Para voto nulo digite qualquer valor! Para
encerrar a votação digite 0! " << endl;

cout <<" O número do candidato " << candidato1 <<" é (1)" <<
endl;

cout <<" O número do canditado " << candidato2 <<" é (2)"

<< endl;

cout <<" O número do candidato " << candidato3 <<" é (3)"

<< endl;

cout << endl <<" Digite seu voto: ";

cin >> voto;

//PROCESSAMENTO DE DADOS

if (voto==1)

{
voto1++;

total_de_votos++;
}
else if (voto==2)

{
voto2++;
total_de_votos++;
}
else if (voto==3)

{
voto3++;
total_de_votos++;
}

}while(voto!=0);

// CÁLCULO

porcentagem_candidato1 = (voto1/total_de_votos)*expre;

porcentagem_candidato2 = (voto2/total_de_votos)*expre;

porcentagem_candidato3 = (voto3/total_de_votos)*expre;

// SAÍDA DE DADOS

if (voto1 > voto2){

if (voto1>voto3){

cout << endl << " O Candidato" << candidato1 << " ganhou
com " << porcentagem_candidato1 << "% dos votos";

}

else if (voto3>voto1){

cout << endl << " O candidato " << candidato3 << " ganhou
com " << porcentagem_candidato3 << "% dos votos";

}

}

else if ((voto2>voto3)&&(voto2>voto1)){

cout << endl << " O candidato " << candidato2 << " ganhou
com " << porcentagem_candidato2 << "% dos votos";

}

// PROCESSAMENTO DE DADOS CASO EMPATE

else if (voto1==voto2){

if (voto1==voto3){

cout << endl << " Houve um empate triplo entre " <<
candidato1 << ", "<< candidato2 << " e " << candidato3 << "com "<<
porcentagem_candidato1 << "% dos votos. Haverá um segundo turno!";
}

else

cout << endl << " Houve um empate duplo com os candidatos
" << candidato1 <<" e " << candidato2 << " com " <<
porcentagem_candidato1 << "% dos votos. Haverá um segundo turno!";
}

else if (voto2==voto3){

if (voto2!=voto1){

cout << endl << " Houve um empate duplo com os candidatos
" << candidato2 << " e " << candidato3 << " com " <<
porcentagem_candidato2 << "% dos votos. Haverá um segundo turno!";
}
}

else{

cout << endl << " Houve um empate duplo com os candidatos " <<
candidato1 << " e " << candidato3 << " com " << porcentagem_candidato1
<< "% de votos. Haverá um segundo turno!";

}

return 0;
}