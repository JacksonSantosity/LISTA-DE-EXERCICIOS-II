#include <stdio.h>
#include <locale.h>

int main() {

    int numeroSecreto = 42; 
    int palpite;

    printf("=== Jogo da Adivinhacao ===\n");

    do {
        printf("Digite um numero entre 1 e 50: ");
        scanf("%d", &palpite);

     
        if (palpite < 1 || palpite > 50) {
            printf("Palpite invalido! Digite apenas numeros entre 1 e 50.\n\n");
            continue; 
        }

        if (palpite < numeroSecreto) {
            printf("O numero secreto eh MAIOR!\n\n");
        } else if (palpite > numeroSecreto) {
            printf("O numero secreto eh MENOR!\n\n");
        }

    } while (palpite != numeroSecreto);

    printf("Parabens! Voce acertou o numero secreto %d.\n", numeroSecreto);

    return 0;
}