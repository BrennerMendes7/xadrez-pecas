#include <stdio.h>

int main() {
    
    int torre, bispo, rainha, cavalo;
    int opcao;
    printf("--- MENU PRINCIPAL ---\n\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("5 - Sair do Jogo\n");
    printf("Digite a peça que deseja mover: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
          for (torre = 0; torre <=4; torre++) {
            printf("Direita\n");
          }

          printf("A torre moveu %d casas para direita !\n", torre);
          break;

        case 2:
          bispo = 0;
          while (bispo <=4) {
            printf("Cima, Direita\n");
            bispo++;
          }

          printf("O bispo moveu %d casas na diagonal para cima e à direita !\n", bispo);
          break;

        case 3:
          rainha = 0;
          do {
            printf("Esquerda\n");
            rainha++;

          } while (rainha <= 7);

          printf("A rainha moveu %d casas para a esquerda !\n", rainha);
          break;

        case 4:
          int movimento = 1;

          while(movimento--) {
            for (cavalo = 0; cavalo < 2; cavalo++) {
                printf("Baixo\n");
            }
            printf("Esquerda\n");
          }

          printf("O cavalo completou o movimento em L\n");
          break;

        case 5:
          printf("Saindo do jogo !\n");
          break;

        default:
          printf("Opção inválida !\n");
          
    }

    return 0;

}