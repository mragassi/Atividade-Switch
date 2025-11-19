#include <stdio.h>
#include "leitor.c"

int main() {
    printf("Escolha um número de 1 a 12 para selecionar  o mês desejado: ");
    int mes = ler_num_inteiro();

    switch(mes) {
        case 1:
        case 2:
        case 12:
        printf("\n Neste mês a estação é VERÃO! \n");
        printf("\n Bora para praia! \n");
        printf("\n Na teoria dos quatro temperamentos humanos o temperamento colérico é simbolizado pelo verão.");
        printf("\n Você sabe qual é o seu temperamento?");
        break;

        case 3:
        case 4:
        case 5:
        printf("\n Neste mês a estação é OUTONO! \n");
        printf("\n Você já limpou as folhas do quintal para sua esposa? \n");
        printf("\n Na teoria dos quatro temperamentos humanos o temperamento fleumático é simbolizado pelo outono.");
        printf("\n Você sabe qual é o seu temperamento?");
        break;

        case 6:
        case 7:
        case 8:
        printf("\n Neste mês a estação é INVERNO! \n");
        printf("\n É hora de tirar os agasalhos e cobertores do armário! \n");
        printf("\n Na teoria dos quatro temperamentos humanos o temperamento melancólico é simbolizado pelo inverno.");
        printf("\n Você sabe qual é o seu temperamento?");
        break;

        case 9:
        case 10:
        case 11:
        printf("\n Neste mês a estação é a PRIMAVERA! \n");
        printf("\n Tire um momento para apreciar a beleza da natureza nesse período. \n");
        printf("\n Na teoria dos quatro temperamentos humanos o temperamento sanguíneo é simbolizado pela primavera. \n");
        printf("\n Você sabe qual é o seu temperamento? \n");
        break;
    }
    return 0;
}