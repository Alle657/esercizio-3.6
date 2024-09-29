#include <stdio.h>

int main() {
    int num_prodotti;
    float prezzo_unitario, totale_non_scontato, totale_scontato, sconto;


    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &num_prodotti);

    printf("Inserisci il prezzo unitario di ogni prodotto: ");
    scanf("%f", &prezzo_unitario);


    totale_non_scontato = num_prodotti * prezzo_unitario;


    if (totale_non_scontato > 50) {

        sconto = (totale_non_scontato - 50) * 0.20 + (50 - 10) * 0.10;
    } else if (totale_non_scontato > 10) {

        sconto = (totale_non_scontato - 10) * 0.10;
    }


    totale_scontato = totale_non_scontato - sconto;


    printf("Importo totale non scontato: %.2f \n", totale_non_scontato);
    printf("Sconto applicato: %.2f \n", sconto);
    printf("Importo totale scontato: %.2f \n", totale_scontato);

    return 0;
}