
#include <stdio.h>

int main() {
    int liczba;
    int licznik_petli = 0;
    char x;

    printf("Program liczy największą liczbę mniejszą od\n");
    printf("liczby podanej przez użytkownika, która\n");
    printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");
    do {
        printf("Podaj liczbę: ");
        scanf(" %d", &liczba);

        // zrób nieparzystą
        if (!(liczba % 2)) --liczba;

        for (; !(liczba % 3) || !(liczba % 5) || !(liczba % 7); liczba -= 2) {
            licznik_petli++;
        }
        printf("znaleziona liczba: %d\n", liczba);

        printf("\n");
        printf("liczba pętli wyniosła: %d\n", licznik_petli);

        printf("Czy chcesz wykonać operację jeszcze raz: TAK - t NIE - n\n");
        scanf(" %c", &x);
    }while(x=='t'|| x=='T');//każdy inny znak zakonczy działanie pętli
    return 0;
}