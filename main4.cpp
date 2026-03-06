#include <iostream>
#include <string>
using namespace std;
struct prodotto{
	string nome;
	string categoria;
	float prezzo;	
};
void aggiungi(prodotto pp, prodotto ele[],int &d){
	ele[d]=pp;
	d++;	
}
string visualizza(prodotto ele[], int d){
	string s;
	for(int i=0;i<d;i++){
		s+=ele[i].nome+"\t";
		s+=ele[i].categoria+"\t";
		s+=to_string(ele[i].prezzo)+"\n";
	}
	return s;
}
void ricerca(prodotto ele[],int d){
	string cerca;
	cout<<"inserisci il prodotto da cerca: ";
	getline(cin,cerca);
	for(int i=0;i<d;i++){
		if(ele[i].nome==cerca){
			cout<<"prodotto presente";
	}
	else{
		cout<<"prodotto non aggiunto";
	}
	}
	}
void cancella()
int main(){
prodotto  p;
prodotto elenco[100];
int n=0;
int scelta;
do{
cout<<"1 - Aggiunta"<<endl;
cout<<"2 - Visualizzazione"<<endl;
cout<<"3 - Ricerca"<<endl;
cout<<"0 - Fine programma"<<endl;
cout<<"scegli l'opzione";
cin>>scelta;
fflush(stdin);
switch(scelta){
	case 1:
		cout<<"Inserisci il nome ";
		getline(cin,p.nome);
		cout<<"Inserisci la categoria ";
		getline(cin,p.categoria);
		cout<<"Inserisci il prezzo ";
		cin>>p.prezzo;
		aggiungi(p,elenco,n);
		break;
	case 2: 
	    cout<<visualizza(elenco,n);
		break;	
	case 3:
		ricerca(elenco,n);
		break;
}
}
while (scelta!=0);	
}
