#include <iostream>
#include <windows.h>

using namespace std;

char tab [3][3];
char nome1[20];
char nome2[20];
char resp;
int linha, coluna;
bool vencedor1, vencedor2;
int cont = 0;
int verif = 0;
bool velha = false;

HANDLE hConsole; // comando de cor

void iniciar()

{

cout << endl;
SetConsoleTextAttribute(hConsole, 12);
cout << endl << " " << "BEM VINDO GAME
OLD!" << endl; //eu sei que é hash, mas adorei o trocadilho kskskskks
cout << endl;

SetConsoleTextAttribute(hConsole, 14);
cout << endl << "----------------------------------------------
----------------------------------" << endl;
SetConsoleTextAttribute(hConsole, 9);
cout << endl;
cout << endl << " AS LINHAS E COLUNAS CORRESPONDEM AS ORDENS
NUMERICAS RESPECTIVAS | 1 | 2 | 3 | ";
cout << endl << " PRIMEIRO JOGADOR |X|
" << endl;
cout << endl << " SEGUNDO JOGADOR |O|
" << endl;
cout << endl;
cout << endl << " BOA SORTE! QUE A SORTE ESTEJA
SEMPRE A SEU FAVOR. " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 14);
cout << endl << "----------------------------------------------
----------------------------------" << endl;
SetConsoleTextAttribute(hConsole, 7);
cout << endl << " Ola primeiro jogador. Qual seu nome? " <<
endl;
cin >> nome1;
cout << endl << " Ola segundo jogador. Qual seu nome? " << endl;
cin >> nome2;

SetConsoleTextAttribute(hConsole, 14);
cout << endl << "-----------------------------------------------
---------------------------------" << endl;
}

void vazio()

//Atribuir valor vazio

{
for (int linha=1 ; linha<4; linha++)
{
for (int coluna= 1; coluna<4; coluna++)
{
tab [linha][coluna]= ' ';

}}}

void exibe()

//Exibir o tabuleiro na tela

{ SetConsoleTextAttribute(hConsole, 12);

cout << endl;
cout << endl;
cout << " " << tab [1][1] << "
| " << tab [1][2] << " | " << tab [1][3] << endl; //Linha 1
cout << " " <<"---------" <<
endl;
cout << " " << tab [2][1] << "
| " << tab [2][2] << " | " << tab [2][3] << endl; //Linha 2
cout << " " <<"---------" <<
endl;
cout << " " << tab [3][1] << "
| " << tab [3][2] << " | " << tab [3][3] << endl; //Linha 3
}

void jogada (char jog)

//escolhe
{

verif ++; //verifica velha
SetConsoleTextAttribute(hConsole, 7); // seleção do comando de cor
do {
cout << endl << " Escolha a Linha: ";
SetConsoleTextAttribute(hConsole, 7);
cin >>linha;
cout << endl << " Escolha a Coluna: ";

SetConsoleTextAttribute(hConsole, 7);
cin >> coluna;

while((coluna<1||coluna>3)||(linha<1||linha>3)) // Laço de
repetição para caractér inválido
{
SetConsoleTextAttribute(hConsole, 20);
cout << endl << " INVALIDO! TENTE NOVAMENTE." << endl;
SetConsoleTextAttribute(hConsole, 7);
cout << endl << " Escolha a Linha: " << endl;
cin >> linha;
cout << endl << " Escolha a Coluna: " << endl;
cin >> coluna;

}
}

while (tab[linha][coluna] != ' ');

tab [linha][coluna] = jog;

}

void vencedores()

{

//////////////////////////////////////////////////////////////////////
///////////
/// VERIFICA VENCEDOR POR LINHA, COLUNA E
DIAGONAL PARA (X) E (0) ///
/// E VERIFICA A VELHA
///

//////////////////////////////////////////////////////////////////////
///////////

SetConsoleTextAttribute(hConsole, 14);

if ((tab[1][1] == 'X') && (tab[1][2]=='X') && (tab[1][3] =='X'))
// linha
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[1][1] == 'O') && (tab[1][2]=='O') && (tab[1][3]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if ((tab[2][1] == 'X') && (tab[2][2]=='X') && (tab[2][3]
=='X'))
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[2][1] == 'O') && (tab[2][2]=='O') && (tab[2][3]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if ((tab[3][1] == 'X') && (tab[3][2]=='X') && (tab[3][3]
=='X'))
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[3][1] == 'O') && (tab[3][2]=='O') && (tab[3][3]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if ((tab[1][1] == 'X') && (tab[2][2]=='X') && (tab[3][3]
=='X')) // diagonal
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if ((tab[1][1] == 'O') && (tab[2][2]=='O') && (tab[3][3]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if ((tab[1][3] == 'X') && (tab[2][2]=='X') && (tab[3][1]
=='X'))
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if ((tab[1][3] == 'O') && (tab[2][2]=='O') && (tab[3][1]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if((tab[1][1] == 'X') && (tab[2][1]=='X') && (tab[3][1]
=='X')) /// coluna
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[1][1] == 'O') && (tab[2][1]=='O') && (tab[3][1]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}

else if((tab[1][2] == 'X') && (tab[2][2]=='X') && (tab[3][2]
=='X'))
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[1][2] == 'O') && (tab[2][2]=='O') && (tab[3][2]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}
else if((tab[1][3] == 'X') && (tab[2][3]=='X') && (tab[3][3]
=='X'))
{

cout <<" Parabens " << nome1 <<" voce venceu a

partida!" << endl;

vencedor1 = true;

}
else if((tab[1][3] == 'O') && (tab[2][3]=='O') && (tab[3][3]
=='O'))
{

cout <<" Parabens " << nome2 <<" voce venceu a

partida!" << endl;

vencedor2 = true;

}

else if (verif == 9){
velha = true;
cout << " OPS! VELHA.";
vazio();
vencedor1 = false;
vencedor2 = false;
}

}

void jogadas()

//laço de repetição para loop de jogo
{
char jog = 'X';

velha = false;
vencedor1= false;
vencedor2 = false;

do{

jogada(jog);

exibe();

vencedores();
if(jog == 'X') {
jog = 'O';
}else{
jog = 'X';
}

if((vencedor1)||(vencedor2)){
break;
}

cont++;

}while(cont<9);
}

int main()
{

hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
iniciar();

do{
vazio();
exibe();
jogadas();
SetConsoleTextAttribute(hConsole, 10);
cout << endl << " Deseja jogar novamente? " << endl;
cont = 0;
verif= 0;
cin >> resp;

}while(resp=='s');

return 0;
}