#include <iostream>
using namespace std;
struct prodotto{
	string nome;
	float prezzo;
	string categoria;
	};
void aggiungi(prodotto p,string p[],int d){
    }  
void visualizza(prodotto p[], int d){
	}
void cerca(prodotto p[], int d, string p){
    }
bool cancella(prodotto p[], int d, string p){
    }
bool modifica(prodotto p[], int d, string p){
    }
int main () {
	prodotto p;
	prodotto supermercato[100];
	int menu;
	
	do{
	cout<<"menù:"<<endl;
	cout<<"0=fine programma"<<endl;
	cout<<"1=funzione aggiungi"<<endl;
	cout<<"2=funzione visualizza"<<endl;
	cout<<"3=funzione cerca"<<endl;
	cout<<"4=funzione cancella"<<endl;
	cout<<"5=funzione modifica"<<endl;
	cout<<"scegli la funzione da utilizzare: ";
	cin>>menu;
	switch case(menu){
		case 1:aggiungi(prodotto p,string p[],int d);
		break;
		case 2:visualizza(prodotto p[], int d);
		break;
		case 3:cerca(prodotto p[], int d, string p);
		break;
		case 4:cancella(prodotto p[], int d, string p);
		break;
		case 5:modifica(prodotto p[], int d, string p);
		break;	
	}
	while(menu!=0){
		cout<<"fine programma";
	}
	}	
	return 0;
}
