#include <stdio.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char resposta;
    int leu;

    while (1) {
        printf("=== Calculadora ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        
        leu = scanf("%d", &opcao);
        if (leu != 1) {
            // Limpa o que o usuario digitou errado (letra)
            while (getchar() != '\n');
            printf("Opcao invalida!\n");
            continue;
        }

        if (opcao == 5) {
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            break;
        }

        if (opcao < 1 || opcao > 5) {
            printf("Opcao invalida!\n");
            continue;
        }

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

        // LOOP DA PERGUNTA s/n - Agora com validação
        while (1) {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &resposta);

            if (resposta == 's' || resposta == 'S') {
                break; // volta pro menu
            } else if (resposta == 'n' || resposta == 'N') {
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
                return 0;
            } else {
                printf("Opcao invalida! Digite s ou n.\n");
                // continua no loop da pergunta
            }
        }
    }

    return 0;
}
