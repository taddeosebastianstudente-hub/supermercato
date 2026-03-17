#include <iostream>
#include <string>
using namespace std;
struct prodotto{
	string nome;
	string categoria;
	float prezzo;
};
void swap(int &a,int &b){                   
	int temp=a;
	a=b;
	b=temp;
	}
void bubblesort(int v[],int d){
		for(int i=0;i<d;i++){
			for(int j=0;j<d;j++){
				if(v[i]<v[i+1]){
					swap(v[i], v[i+1]);
	    }
		}
		}
		}
void aggiungi(prodotto pp, prodotto ele[],int &d){
	ele[d]=pp;
	d++;
}
void aggiungi2(prodotto pp, prodotto ele[],int d){
	
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
int ricerca(prodotto ele[],int d){
	string cerca;
	cout<<"inserisci il prodotto da cercare: ";
	getline(cin,cerca);
	for(int i=0;i<d;i++){
		if(ele[i].nome==cerca){
			return i;
	}
	else{
		return -1;
	}
	}
	}
bool cancella(prodotto ele[],int d){
	string nome;
	cout<<"inserisci il nome del prodotto da eliminare: ";
	getline(cin,nome);
	for(int i=0;i<d;i++){
		if(ele[i].nome==nome){
			for(int j=0;j<d;j++){
				ele[j]=ele[j+1];
			d--;
                                 return true;
				}
			}
			else{
				return false;
			}
		}
	}
void modifica(prodotto ele[],int d){
	string nome;
	cout<<"inserisci il prodotto da modificare: "
	getline(cin,nome);
	for(int i=0;i<d;i++){
		if(ele[i].nome==nome){
		cout<<"modifica prodotto"<<endl;
		cout<<"nome prodotto: ";
		cin>>ele[i].nome;
		cout<<"categoria prodotto: ";
		cin>>ele[i].categoria;
		cout<<"prezzo prodotto: ";
		cin>>ele[i].prezzo;
}
else{
	cout<<"prodotto non presente";
	}
}
}
int main(){
prodotto p;
prodotto elenco[100];
int n=0;
int scelta;
do{
cout<<"1 - Aggiunta"<<endl;
cout<<"2 - Visualizzazione"<<endl;
cout<<"3 - Ricerca"<<endl;
cout<<"4 - Cancella"<<endl;
cout<<"5 - Modifica"<<endl;
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
	case 4:
		cancella(elenco,n);
		break;
	case 5:
		modifica(elenco,n);
		break;
}
}
while (scelta!=0);
}