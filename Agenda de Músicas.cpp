#include <iostream>
#include <locale.h>
#include <conio.h>
#include <windows.h>

using namespace std;

const int tam = 10; //Tamanho máximo da playlist
bool invalido;
int op; //Decisão
int p; //Posição
int pos; //Conversão

HANDLE hConsole; // comando de cor

struct Tlista
{

char musicas[50];

char banda[50];
};

struct Tlista musicas[tam];

void limpar()

{

for (int c=0; c<tam; c++){
musicas[c].musicas[0]=' ';
}
}

void inserir()
{
do{
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Fala ai a posição do ranking que sua música vai ocupar de 1 á 10: ";
cin >> p;
p--; //Conversão

if (musicas[p].musicas[0] != ' ')
{

invalido = true;
SetConsoleTextAttribute(hConsole, 12);
cout << endl << " Ai não dá né aspira! " << endl;

}
else
{

invalido = false;
break;

}

}while(invalido == true);

SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Lança o nome da música: ";
cin >> musicas[p].musicas;
cout << endl << " Agora o nome da banda. Música sem Banda não dá, né!: ";
cin >> musicas[p].banda;

}

void pesquisa()
{
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Conta para o spotfake a posição do ranking da música, meu filho ";
cin >> p;
p--;

if (musicas[p].musicas[0] == ' ')
{

cout << endl << "" << endl;

}
else
{

pos=p;
p++;
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Na posição" << p << " do ranking " << endl;
cout << endl << " Música: " << musicas[pos].musicas << endl;
cout << endl << " Banda:" << musicas[pos].banda << endl << endl;

}
}
void exibir(int e)
{
pos=e;
e++;
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Posição do ranking: " << e << endl;
cout << endl << " Música: " << musicas[pos].musicas << endl;
cout << endl << " Banda: " << musicas[pos].banda << endl;

}
void mostrar_todos()
{

for (int e=0; e<tam; e++){
if(musicas[e].musicas[0]!=' '){
exibir(e);

}
}
}

void altera()
{
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " OH, INDECISÃO!! Conta para mim o ranking da música que vai ser
alterada, vai: ";
cin >> p;
p--;

if(musicas[p].musicas[0]==' ')
{
SetConsoleTextAttribute(hConsole, 12);
cout << endl << "Ai não dá né aspira!" << endl;
cout << endl << "TENTA DE NOVO!" << endl;

}
else
{
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Música: ";
cin >> musicas[p].musicas;
cout << endl << " Banda: ";

cin >> musicas[p].banda;

}
}
void exclui()
{
SetConsoleTextAttribute(hConsole, 15);
cout << endl << " Fala ai a posição do ranking da música que vai ser excluída, vai: ";
cin >> p;
p--;

if(musicas[p].musicas[0]==' ')
{
SetConsoleTextAttribute(hConsole, 12);
cout << " Ai não dá né aspira! " << endl;
cout << " TENTA DENOVO! " << endl;

}
else{musicas[p].musicas[0]=' ';
}
}
int main()
{

hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

setlocale(LC_ALL,"portuguese"); //Biblioteca para português

limpar();

SetConsoleTextAttribute(hConsole, 9);
cout << "-------------------------------------------------------------------------------
-" << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << " BEM-VINDO AO SPOTFAKE BANDO DE BURGUÊS SAFADO " <<
endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "-------------------------------------------------------------------------------
-" << endl << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cout << " IMPORTANTE --> PARA ESPAÇO USE O ( _ ) " <<
endl;
cout << " LEMBRA AI 06 AS POSIÇÕES VÃO DE 1 Á 10 "
<< endl;
cout << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 9);
cout << "-------------------------------------------------------------------------------
-" << endl;

SetConsoleTextAttribute(hConsole, 15);

cout << endl << " MANDA QUALQUER COISA AI QUE EU DOU UM START-SE PARA VOCÊ ";
//REFERÊNCIAS DO MEU PROGRAMA DE CORRIDA, TEMOS!

_getch(); //limpar a tela
system("clear||cls"); //limpa

do{

invalido = false;
SetConsoleTextAttribute(hConsole, 9);
cout << endl << " [1]Lança o nome da música ai: " << endl;
cout << " [2]Para pesquisar: " << endl;
cout << " [3]Para alterar!!! Decide isso ai meu filho " << endl;
cout << " [4]Para ver o ranking: " << endl;
cout << " [5]Para excluir: " << endl;
cout << " [6]Pede para sair! " << endl;
cout << endl;
SetConsoleTextAttribute(hConsole, 15);
cin >> op;

if (op==1)
{

inserir();
system("clear||cls");

}
else if (op==2)
{

pesquisa();
SetConsoleTextAttribute(hConsole, 15);
cout << endl << "Digite qualquer coisa ai meu filho ";
_getch();
system("clear||cls");

}
else if (op==3)
{
altera();
system("clear||cls");

}
else if (op==4)
{

mostrar_todos();

}

else if (op==5)
{

exclui();
system("clear||cls");

}
}while(op!=6);

return 0;
}