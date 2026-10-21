#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int opcao;
    double num1, num2, resultado;
    char resposta;
    char entrada[100];

    while (1) {
        printf("=== Calculadora ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        
        scanf("%99s", entrada);
        
        // Verifica se é inteiro de 1 a 5 e NADA mais
        char *end;
        long val = strtol(entrada, &end, 10);
        // Se sobrou alguma letra/ponto no final, é invalido
        if (*end != '\0' || end == entrada) {
            printf("Opcao invalida!\n");
            continue;
        }
        opcao = (int)val;

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

        while (1) {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &resposta);
            if (resposta == 's' || resposta == 'S') break;
            else if (resposta == 'n' || resposta == 'N') {
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
                return 0;
            } else {
                printf("Opcao invalida! Digite s ou n.\n");
            }
        }
    }
    return 0;
}
