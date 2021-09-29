#include <iostream>
#include <stdlib.h>

using namespace std;
struct nodo
{
    int x; //valore del nodo della lista
    nodo *next; //indirizzo dell'elemento successivo
};

nodo *T, *coda;


void initLista(){
    T = NULL;
    coda = NULL;
    cout<<endl<<"|||| LISTA CREATA ||||"<<endl;
}

void headAdd(){
    nodo *nuovoP = new nodo;
    cout<<"Inserisci il valore del nodo da aggiungere in testa: ";
    cin>>nuovoP->x;
    nuovoP->next = NULL;
    if(T == NULL){
        T = nuovoP;
        coda = nuovoP;
    } else {
        nuovoP->next = T;
        T = nuovoP;
    }
    cout<<endl<<"|||| NODO AGGIUNTO IN TESTA ||||"<<endl;
}

void tailAdd(){
    nodo *nuovoP = new nodo;
    cout<<"Inserisci il valore del nodo da aggiungere in coda: ";
    cin>>nuovoP->x;
    nuovoP->next = NULL;
    if(T == NULL){
        T = nuovoP;
        coda = nuovoP;
    } else {
        nuovoP->next = NULL;
        coda->next = nuovoP;
        coda = nuovoP;
    }
    cout<<endl<<"|||| NODO AGGIUNTO IN TESTA ||||"<<endl;
}

void stampaLista(){
    nodo *p = T;
    int counter = 0;
    cout<<endl<<"Elementi della lista: "<<endl;
    while(p != NULL){
        cout<<counter<<") "<<p->x<<endl;
        p = p->next;
        counter++;
    }
    cout<<endl;
}

int main()
{
    int c;
    do{
        cout<<"Operazioni sulla lista:"<<endl;
        cout<<"0) Esci;\n1) Crea lista;\n2) Aggiungi elemento in testa;\n3) Aggiungi elemento in coda;\n4) Visualizza lista;\nInserisci scelta: ";
        cin>>c;
        system("cls");
        switch(c){
            case 0:
                cout<<"Arrivederci"<<endl;
                break;
            case 1:
                initLista();
                break;
            case 2:
                headAdd();
                break;
            case 3:
                tailAdd();
                break;
            case 4:
                stampaLista();
                break;
            default:
                cout<<"Errore, reinserire la scelta."<<endl;
                break;
        }
    }while(c != 0);
    return 0;
}
