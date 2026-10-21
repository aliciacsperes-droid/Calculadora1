#include <stdio.h>
#include <string.h>

int main() {
    float num1, num2, resultado;
    char entrada[100];
    int opcao;
    char resposta;

    while (1) {
        printf("\n=== Calculadora ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%99s", entrada);

        if (strlen(entrada) != 1 || entrada[0] < '1' || entrada[0] > '5') {
            printf("Opcao invalida!\n");
            continue;
        }

        opcao = entrada[0] - '0';

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if (opcao == 1) {
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 2) {
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 3) {
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
        } else if (opcao == 4) {
            if (num2 == 0) {
                printf("Erro: divisao por zero nao e permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
        }

        while (1) {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &resposta);
            if (resposta == 's' || resposta == 'S') {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
                return 0;
            } else {
                printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
            }
        }
    }
    return 0;
}
