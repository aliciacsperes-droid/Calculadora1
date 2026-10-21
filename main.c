#include <stdio.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char resposta;

    do {
        printf("=== Calculadora ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 4) {
            printf("Opcao invalida!\n");
        } else {
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);

            if (opcao == 1) {
                resultado = num1 + num2;
                printf("Resultado: %g + %g = %g\n", num1, num2, resultado);
            } else if (opcao == 2) {
                resultado = num1 - num2;
                printf("Resultado: %g - %g = %g\n", num1, num2, resultado);
            } else if (opcao == 3) {
                resultado = num1 * num2;
                printf("Resultado: %g * %g = %g\n", num1, num2, resultado);
            } else if (opcao == 4) {
                if (num2 == 0) {
                    printf("Erro: divisao por zero nao e permitida!\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %g / %g = %g\n", num1, num2, resultado);
                }
            }
        }

        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N') {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }

    } while (resposta == 's' || resposta == 'S');

    return 0;
}
