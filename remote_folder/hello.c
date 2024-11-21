#include <stdio.h>
#include <stdlib.h> // słuzy do zarządzania pamięcią, konwersji typów itd. potrzebujemy ją do funckji atof

int main(int argc, char **argv) {
    // Sprawdź, czy podano wystarczającą liczbę argumentów
    if (argc < 4) {
        printf("Użycie: %s <imię> <pseudonim> <liczba1> <liczba2> ... <liczbaN>\n", argv[0]);
        return 1; // Zwróć kod błędu
    }

    // Pobierz imię i pseudonim z argumentów
    char *imie = argv[1];
    char *pseudonim = argv[2];

    // Wyświetl powitanie
    printf("Hello world, %s %s\n", pseudonim, imie);

    double suma = 0.0;
    int i;
    int liczba_parametrow = argc - 3; // Liczymy liczbę podanych liczb

    for (i = 3; i < argc; i++) {
        suma += atof(argv[i]); // Przekształcamy argumenty na liczby zmiennoprzecinkowe
    }

    int srednia = (int)suma / liczba_parametrow; // Obliczamy średnią

    printf("Średnia: %d\n", srednia);

    return 0; // Zwróć kod sukcesu
}
