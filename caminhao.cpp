#include <iostream>
#include <Windows.h>
#include<igraph.h>


using namespace std;

class geral{

public:
	
int tempo;
int levelgral;
int grana_total;
string nome_usuario;
int caminhoes_que_tem[5];

void time()
{
	int tempo;
cout << "Insira o tempo em min: ";
cin >> tempo;

cout << "fazendo entrega..." << endl;

while(tempo >= 0){
	
	tempo--;
	Sleep(1000);
}
}

void decida_nome(string name_user)
{
	nome_usuario=name_user;
}

void comprar_caminhao()
{
	int caminhao_comprado;
	int custo_caminhoes[5];
	
	custo_caminhoes={100,200,300,400,500}
	
	cout<<"qual caminhao deseja comprar?"<<endl;
	cout<<" "<<endl;
	cout<<"caminhao level-1: preço: 100 Reais"<<endl;
	
	cout<<" "<<endl;
	cout<<"especificações: "<<endl;
	cout<<" "<<endl;
	cout<<"leva cargas: tipo 1"<<endl;
	cout<<"custo mensal: 50 Reais"<<endl;
	cout<<"custo de eventual estrago: 100 Reais"<<endl;
	cout<<" "<<endl;
	cout<<"caminhao level-2: preço: 200 Reais"<<endl;
	
	cout<<" "<<endl;
	cout<<"especificações: "<<endl;
	cout<<" "<<endl;
	cout<<"leva cargas: tipo 1 e 2."<<endl;
	cout<<"custo mensal: 70 Reais"<<endl;
	cout<<"custo de eventual estrago: 150 Reais"<<endl;
	cout<<" "<<endl;
	cout<<"caminhao level-3: preço: 300 Reais"<<endl;
	
	cout<<" "<<endl;
	cout<<"especificações: "<<endl;
	cout<<" "<<endl;
	cout<<"leva cargas: tipo 1,2 e 3"<<endl;
	cout<<"custo mensal: 90 Reais"<<endl;
	cout<<"custo de eventual estrago: 200 Reais"<<endl;
	cout<<" "<<endl;
	cout<<"caminhao level-4: preço: 400 Reais"<<endl;
	
	cout<<" "<<endl;
	cout<<"especificações: "<<endl;
	cout<<" "<<endl;
	cout<<"leva cargas: tipo 1,2,3 e 4"<<endl;
	cout<<"custo mensal: 110 Reais"<<endl;
	cout<<"custo de eventual estrago: 250 Reais"<<endl;
	cout<<" "<<endl;
	cout<<"caminhao level-5: preço: 500 Reais"<<endl;
	
	cout<<" "<<endl;
	cout<<"especificações: "<<endl;
	cout<<" "<<endl;
	cout<<"leva cargas: tipo 1,2,3,4 e 5"<<endl;
	cout<<"custo mensal: 130 Reais"<<endl;
	cout<<"custo de eventual estrago: 300 Reais"<<endl;
	cout<<" "<<endl;
	
	cout<<"digite o numero de opçao corrrespondente ao caminhao que deseja"<<endl;
	cout<<"1- caminhao level 1"<<endl;
	cout<<"2- caminhao level 2"<<endl;
	cout<<"3- caminhao level 3"<<endl;
	cout<<"4- caminhao level 4"<<endl;
	cout<<"5- caminhao level 5"<<endl;
	
	cin>>caminhao_comprado;
	
	if(grana_total>=preco_caminhoes[caminhao_comprado - 1])
	{
		cout<<"compra efetuada com sucesso"<<endl;	
	}
	else
	{
		cout<<"voce não tem dinheiro suficiente"<<endl;
	}
	
	
}

void cidades{


}


void pagamentos()
{
	
	
	
}

void calcular_tempo(){
	
	if caminhao1{};
	if camminhao2{};
	if caminhao3{};
	if caminhao4{};
	if caminhao5{};
	
	
}

int carros_disponiveis[5];

void garagem_parados(){
	
	
  	
  	
}


void cargas(){
	
	int lev1[3]; 
	lev1={5,10,15}; //valores a receber
	int lev2[3];
	lev2={20,25,30};
	int lev3[3];
	lev3={35,40,45};
	int lev4[12];
	lev4={50,55,60};
	int lev5[14];
	lev5={65,70,75};
	
}

void carga (int caminhao) {
	level_1 = false;
	level_2 = false;
	level_3 = false;
	level_4 = false;
	level_5 = false;
	if (caminhao == 1){
		level_1 = true;
	}
	else if (caminhao == 2){
		level_1 = true;
		level_2 = true;
	}
	else if (caminhao == 3){
		level_1 = true;
		level_2 = true;
		level_3 = true;
	}
	else if (caminhao == 4) {
		level_1 = true;
		level_2 = true;
		level_3 = true;
		level_4 = true;
	}
	else if (caminhao == 5) {
		level_1 = true;
		level_2 = true;
		level_3 = true;
		level_4 = true;
		level_5 = true;
	}
}

};


int main(){
	
	geral acesso;
	
	cout<<"Bem vindo ao AED Truck"<<endl;
	cout<<" "<<endl;
	cout<<"digite o nome de usuario"<<endl;
	cin>>user;
	acesso.decida_nome(user);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
