#include <stdio.h>

int main () {

    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n  Bem vindo(a)! Ao Meu primeiro \n");
    printf("     |_|_|nnnn nnnn|_|_|     modelo de calculadora \n");
    printf("    |\" \"|  |_|  |\" \"|                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int n1;
    int n2;

    int operacao;

    printf("(1) soma (2) subtracao (3) multiplicacao (4) divisao\n");
    printf("Qual operacao deseja fazer? \n");
    scanf("%d", &operacao);

    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite outro numero: \n");
    scanf("%d", &n2);

    int soma;
    int menos;
    int multi;
    int divisao;

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

    if (operacao == 1)
    {
        printf("Seu resultado da soma entre %d e %d eh: %d\n", n1, n2, soma);
    }
    else  if (operacao == 2)
    {
        printf("Seu resultado da subtracao entre %d e %d eh: %d\n", n1, n2, menos);
    }
    else  if (operacao == 3)
    {
        printf("Seu resultado da multiplicacao eh: %d\n", multi);
    }
    else {

        printf("Seu resultado da divisao entre %d e %d eh: %.2d\n", n1, n2, divisao);
    }

    printf("Muito obrigado por usar nosso sistema de operacoes!");
}
