#include <stdio.h>
int main() {
    int opcao;
    double num1, num2, resultado;
    char continuar;
    int retorno;

    while (1) {
        // --- MENU ---
        printf("========================================\n");
        printf("  Calculadora Simples\n");
        printf("========================================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção: ");
        retorno = scanf("%d", &opcao);
    
        if (retorno != 1) {
            printf("Opção inválida! Digite um número entre 1 e 5.\n");
            // limpa o buffer
            while (getchar() != '\n');
            continue;
        }

            if (opcao < 1 || opcao > 5) {
            printf("Opção inválida! Digite um número entre 1 e 5.\n");
            continue;
        }

        if(opcao == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);
        printf("Digite o segundo número: ");
        scanf("%lf", &num2);

          int erroDivZero = 0;
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %g + %g = %g\n", num1, num2, resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %g - %g = %g\n", num1, num2, resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %g * %g = %g\n", num1, num2, resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida!\n");
                    erroDivZero = 1;
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %g / %g = %g\n", num1, num2, resultado);
                }
                break;
        }

           char resposta;
    while(1){
        printf("Deseja realizar outra operacao? (s/n): ");
        scanf(" %c", &resposta);

        if(resposta == 's' || resposta == 'S'){
            // opcional: limpar tela
            // printf("\n\n\n\n\n\n\n\n\n\n");
            break; // volta pro menu
        }else if(resposta == 'n' || resposta == 'N'){
            printf("Obrigado por usar a calculadora! Ate a proxima.\n");
            return 0;
        }else{
            printf("Resposta invalida! Digite 's' para sim ou 'n' para nao.\n");
        }
    }
    }

    return 0;
}
