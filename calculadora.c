#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main () {

    
    printf("\n\n");

    float n1;
    float n2;

    int operacao;

    printf("Digite: 1 para soma\n");
    printf("Digite: 2 para subtracao\n");
    printf("Digite: 3 para multiplicacao\n");
    printf("Digite: 4 para divisao\n");
    printf("Digite: 5 para Sair\n");
    printf("Qual operacao deseja fazer? \n");
    scanf("%d", &operacao);

    if (operacao == 5) {
        exit(0);
    } else {
        printf("Digite o primeiro numero: \n");
        scanf("%f", &n1);

        printf("Digite o segundo numero: \n");
        scanf("%f", &n2);
    }

    int soma, menos, multi;
    float divisao;

    switch (operacao) {
     case 1: 
        soma = n1 + n2;
     break;
     case 2: 
        menos = n1 - n2;
     break;
     case 3: 
        multi = n1 * n2;
     break;
     case 4: 
        if (n2 != 0) {
            divisao = n1 / n2;	
        } else {
            printf("Erro: divisao por zero nao existe!\n");
            return 1;
        }
        break;
        default:
            printf("Operação Invalida!\n");
            return 1;
    }
    
    if (operacao == 1) {
        printf("Seu resultado da soma entre %.1f e %.1f eh: %d\n", n1, n2, soma);
    }
    else  if (operacao == 2) {
        printf("Seu resultado da subtracao entre %.1f e %.1f eh: %d\n", n1, n2, menos);
    }
    else  if (operacao == 3) {
        printf("Seu resultado da multiplicacao entre %.1f e %.1f eh: %d\n", n1, n2, multi);
    }
    else {
        printf("Seu resultado da divisao entre %.1f e %.1f eh: %.1f\n", n1, n2, divisao);
    }

    printf("Muito obrigado por usar minha calculadora!");
}
