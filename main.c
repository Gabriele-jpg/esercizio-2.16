#include <stdio.h>

int main() {
    float prezzo_biglietto, provvigione;
    printf("Inserisci il prezzo del biglietto: ");
    scanf("%f", &prezzo_biglietto);
    provvigione = prezzo_biglietto * 0.15;
    if (provvigione < 5) {
        provvigione = 5;
    }
    printf("La provvigione è: %.2f euro\n", provvigione);
    printf("Il prezzo finale del biglietto è: %.2f euro\n", prezzo_biglietto + provvigione);

    return 0;
}
