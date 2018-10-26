
#include <stdio.h>

void opis_programu();

int zrob_nieparzyste(int liczba);

void szukaj_liczby(int *liczba, int *licznik_petli);

int program_glowny(int *liczba, int *licznik_petli);

int main() {
    int liczba;
    int licznik_petli = 0;
    char x;

    opis_programu();
    do {
        printf("Podaj liczbę: ");
        scanf(" %d", &liczba);

        liczba = zrob_nieparzyste(liczba);
        liczba = program_glowny(&liczba, &licznik_petli);

        printf("Czy chcesz wykonać operację jeszcze raz: TAK - t NIE - n\n");
        scanf(" %c", &x);
    }while(x=='t'|| x=='T');//każdy inny znak zakonczy działanie pętli
    return 0;
}

int program_glowny(int *liczba, int *licznik_petli) {
    szukaj_liczby(liczba, licznik_petli);
    printf("znaleziona liczba: %d\n", (*liczba));

    printf("\n");
    printf("liczba pętli wyniosła: %d\n", (*licznik_petli));
    return (*liczba);
}

void szukaj_liczby(int *liczba, int *licznik_petli) {
    for (; !((*liczba) % 3) || !((*liczba) % 5) || !((*liczba) % 7); (*liczba) -= 2) {
            (*licznik_petli)++;
        }
}

int zrob_nieparzyste(int liczba) {// zrób nieparzystą
    if (!(liczba % 2)) --liczba;
    return liczba;
}

void opis_programu() {
    printf("Program liczy największą liczbę mniejszą od\n");
    printf("liczby podanej przez użytkownika, która\n");
    printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");
}