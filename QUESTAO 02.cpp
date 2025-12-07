#include <stdio.h>
#include <locale.h>

int main() {

    int n, soma = 0;
    printf("Digite um numero N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        soma += i * i;
    }

    printf("A soma dos quadrados de 1 ate %d EH: %d\n", n, soma);

    return 0;
}