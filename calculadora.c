#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, resultado;
    int operacao;

   

    do {
        printf("--- Menu de Operacoes ---\n");
        printf("1: Soma\n2: Subtracao\n3: Multiplicacao\n4: Divisao\n5: Sair\n");
        printf("Escolha: ");
        scanf("%d", &operacao);

        if (operacao == 5) {
            printf("\nSaindo... Ate logo!\n");
            break; 
        }

        if (operacao < 1 || operacao > 5) {
            printf("\nOpcao invalida! Tente novamente.\n\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        switch (operacao) {
            case 1:
                resultado = n1 + n2;
                printf("\n>>> Resultado: %.2f + %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 2:
                resultado = n1 - n2;
                printf("\n>>> Resultado: %.2f - %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 3:
                resultado = n1 * n2;
                printf("\n>>> Resultado: %.2f * %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 4:
                if (n2 != 0) {
                    resultado = n1 / n2;
                    printf("\n>>> Resultado: %.2f / %.2f = %.2f\n", n1, n2, resultado);
                } else {
                    printf("\n[ERRO] Divisao por zero nao permitida!\n");
                }
                break;
        }
        printf("---------------------------\n\n");

    } while (operacao != 5);

    return 0;
}
