#include <stdio.h>
#include <stdlib.h>

//creo una funzione per il menù
void print_menu();

void print_menu()
{
printf("Start menu\n");
printf("A-> Inizia nuova partita\nB-> Uscire dal gioco\n");
printf("Inserisci la lettere per dare la tua scelta: ");
}


int main() {
    char scelta;
    char nome[50];
    int punteggio = 0;

printf("Benvenuto\n");

//richiamo la funzione del menù per far effettuare la scelta all'utente
print_menu();
scanf("%c", &scelta);

//scelta di giocare. 
 if (scelta=='A' || scelta=='a'){
    printf("Inserisci il tuo nome:\n"); //si chiede all'utente di inserire un nome
    scanf("%s", nome);

    //prima domanda
    printf("\n1): Qual è la capitale dell'Italia?\n");
    printf("A) Roma\nB) Milano\nC) Napoli\n");
    char risposta1;
    scanf(" %c", &risposta1);
    if (risposta1 == 'A' || risposta1 == 'a') {
        punteggio++;
    }

    //seconda domanda
    printf("\n2): Qual è la capitale della Francia?\n");
    printf("A) Nizza\nB) Parigi\nC) Marsiglia\n");
    char risposta2;
    scanf(" %c", &risposta2);
    if (risposta2 == 'B' || risposta2 == 'b') {
        punteggio++;

    }

    //terza domanda
    printf("\n3): Qual è la capitale della Germania?\n");
    printf("A) Stoccarda\nB) Norimberga\nC) Berlino\n");
    char risposta3;
    scanf(" %c", &risposta3);
    if (risposta3 == 'C' || risposta3 == 'c') {
        punteggio++;

    }
    printf("\n%s, hai totalizzato %d punti!\n", nome, punteggio); //stampo il risultato con nome e punteggio

    }
 
    return 0;
 
 

  }

