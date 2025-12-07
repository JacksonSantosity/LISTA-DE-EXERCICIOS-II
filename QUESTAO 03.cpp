#include <stdio.h>
#include <locale.h>

int main() {

    int soma = 0, valor;

    printf("Digite os valores do dado (1 a 6):\n");

    while (soma < 20) {
        printf("Valor do dado: ");
        scanf("%d", &valor);

     
        if (valor < 1 || valor > 6) {
            printf("Valor invalido! O dado so pode ter numeros de 1 a 6.\n\n");
            continue; 
        }

        soma += valor;
        printf("Soma atual: %d\n\n", soma);
    }

    printf("Fim do jogo! A soma final foi %d.\n", soma);

    return 0;
}