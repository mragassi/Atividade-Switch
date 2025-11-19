#include <stdio.h>
#include "leitor.c"

int main() {

    int opcCarne, opcAcomp, opcBebida;

    float precoCarne = 0;
    float precoAcomp = 0;
    float precoBebida = 0;

    printf("Digite seu nome: ");
    char* nome = ler_texto();

    printf("Olá, %s!\n", nome);
    free(nome);

    // ---------------- MENU CARNE ----------------
    printf("====== MENU DE CARNES ======\n");
    printf("1 - Filé de frango      (R$ 15,00)\n");
    printf("2 - Bisteca suína       (R$ 15,00)\n");
    printf("3 - Carne de panela     (R$ 17,50)\n");
    printf("4 - Peixe empanado      (R$ 16,00)\n");
    printf("5 - Carne de soja       (R$ 18,00)\n");

    printf("\nEscolha o tipo de carne: ");
    opcCarne = ler_num_inteiro();

    switch (opcCarne) {
        case 1: precoCarne = 15.0; 
        break;

        case 2: precoCarne = 15.0; 
        break;

        case 3: precoCarne = 17.5; 
        break;

        case 4: precoCarne = 16.0; 
        break;

        case 5: precoCarne = 18.0; 
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ---------------- MENU ACOMPANHAMENTO ----------------
    printf("\n====== ACOMPANHAMENTOS ======\n");
    printf("1 - Arroz e feijão          (R$ 10,00)\n");
    printf("2 - Arroz e fritas          (R$ 11,00)\n");
    printf("3 - Macarrão alho e óleo    (R$ 12,00)\n");
    printf("4 - Macarrão à bolonhesa    (R$ 14,00)\n");

    printf("\nEscolha o acompanhamento: ");
    opcAcomp = ler_num_inteiro();

    switch (opcAcomp) {
        case 1: precoAcomp = 10.0; 
        break;

        case 2: precoAcomp = 11.0; 
        break;

        case 3: precoAcomp = 12.0;
         break;

        case 4: precoAcomp = 14.0; 
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ---------------- MENU BEBIDAS ----------------
    printf("\n====== BEBIDAS ======\n");
    printf("1 - Coca-Cola 200 mL        (R$ 2,50)\n");
    printf("2 - Suco de Laranja 200 mL  (R$ 4,50)\n");
    printf("3 - Água Mineral 350 mL     (R$ 1,50)\n");

    printf("\nEscolha a bebida: ");
    opcBebida = ler_num_inteiro();

    switch (opcBebida) {
        case 1: precoBebida = 2.5; 
        break;

        case 2: precoBebida = 4.5; 
        break;

        case 3: precoBebida = 1.5; 
        break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ---------------- TOTAL ----------------
    float total = precoCarne + precoAcomp + precoBebida;

    printf("\n======= RESUMO DO PEDIDO =======\n");
    printf("Carne escolhida:          %d (R$ %.2f)\n", opcCarne, precoCarne);
    printf("Acompanhamento escolhido: %d (R$ %.2f)\n", opcAcomp, precoAcomp);
    printf("Bebida escolhida:         %d (R$ %.2f)\n", opcBebida, precoBebida);

    printf("\nTOTAL DO PEDIDO: R$ %.2f\n", total);
    
    return 0;
}