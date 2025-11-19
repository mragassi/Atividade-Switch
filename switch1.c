#include <stdio.h>
#include "leitor.c"


int main() {
   
    printf("\n Escolha a região desejada para saber custo do frete: \n");
    printf("\n 1 - Sul \n");
    printf("\n 2- Sudeste \n");
    printf("\n 3 - Centro-Oeste \n");
    printf("\n 4 - Nordeste \n");
    printf("\n 5 - Norte \n");
    int frete = ler_num_inteiro();

    switch(frete) {
       case 1: 
       printf("\n Sul: R$ 5,00 \n");
       break;

       case 2:
       printf("\n Sudeste: R$ 5,00 \n");
       break;

       case 3:
       printf("\n Centro-Oeste: R$ 7,00 \n");
       break;

       case 4:
       printf("\n Nordeste: R$ 12,50 \n");
       break;

       case 5:
       printf("\n Norte: R$ 15,00 \n");
       break;

    }
    return 0;
}