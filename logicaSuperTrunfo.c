#include <stdio.h>

int main() {

    printf("Desafio_Super_trunfo_Nivel_Aventureiro!");
    
    // Dados das cidades
    int pop_sp = 11895578;
    float area_sp = 1521;
    float pib_sp = 748;
    float dens_sp = pop_sp / area_sp;
    int pt_sp = 70;

    int pop_rj = 6729894;
    float area_rj = 1200;
    float pib_rj = 360;
    float dens_rj = pop_rj / area_rj;
    int pt_rj = 80;

    int opcao;
    int pontos_sp = 0, pontos_rj = 0;
    int empate;

    printf("=========================================\n");
    printf("        JOGO SUPER TRUNFO - PAISES       \n");
    printf("=========================================\n");
    printf("Cartas em jogo:\n");
    printf("BRASIL - São Paulo  x  Rio de Janeiro\n");
    printf("=========================================\n\n");

    // Continua até alguém atingir 2 pontos
    while (pontos_sp < 2 && pontos_rj < 2) {
        empate = 1;

    while (empate) {
        printf("Escolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Densidade Populacional\n");
        printf("5 - Pontos Turísticos\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        printf("\n=========================================\n");

    switch (opcao) {
        case 1:
        printf("Comparando POPULAÇÃO:\n");
        printf("São Paulo: %d habitantes\n", pop_sp);
        printf("Rio de Janeiro: %d habitantes\n", pop_rj);
    if (pop_sp > pop_rj) {
        printf("\n>> São Paulo venceu esta rodada!\n");
            pontos_sp++;
            empate = 0;
    } else if (pop_rj > pop_sp) {
        printf("\n>> Rio de Janeiro venceu esta rodada!\n");
            pontos_rj++;
            empate = 0;
    } else 
        {
        printf("\nEmpate! Escolha um novo atributo.\n");
        }  
    break;

        case 2:
        printf("Comparando ÁREA:\n");
        printf("São Paulo: %.2f km²\n", area_sp);
        printf("Rio de Janeiro: %.2f km²\n", area_rj);
    if (area_sp > area_rj) {
        printf("\n>> São Paulo venceu esta rodada!\n");
            pontos_sp++;
            empate = 0;
    } else if (area_rj > area_sp) {
        printf("\n>> Rio de Janeiro venceu esta rodada!\n");
            pontos_rj++;
            empate = 0;
    } else {
        printf("\nEmpate! Escolha um novo atributo.\n");
    }
        break;

        case 3:
        printf("Comparando PIB:\n");
        printf("São Paulo: %.2f bilhões\n", pib_sp);
        printf("Rio de Janeiro: %.2f bilhões\n", pib_rj);
           if (pib_sp > pib_rj) {
        printf("\n>> São Paulo venceu esta rodada!\n");
            pontos_sp++;
            empate = 0;
    } else if (pib_rj > pib_sp) {
        printf("\n>> Rio de Janeiro venceu esta rodada!\n");
            pontos_rj++;
            empate = 0;
    } else {
        printf("\nEmpate! Escolha um novo atributo.\n");
    }
        break;

        case 4:
        printf("Comparando DENSIDADE POPULACIONAL (menor vence):\n");
        printf("São Paulo: %.2f hab/km²\n", dens_sp);
        printf("Rio de Janeiro: %.2f hab/km²\n", dens_rj);
           if (dens_sp < dens_rj) {
        printf("\n>> São Paulo venceu (menor densidade)!\n");
           pontos_sp++;
           empate = 0;
    } else if (dens_rj < dens_sp) {
        printf("\n>> Rio de Janeiro venceu (menor densidade)!\n");
           pontos_rj++;
           empate = 0;
    } else {
        printf("\nEmpate! Escolha um novo atributo.\n");
    }
        break;

        case 5:
        printf("Comparando PONTOS TURÍSTICOS:\n");
        printf("São Paulo: %d pontos\n", pt_sp);
        printf("Rio de Janeiro: %d pontos\n", pt_rj);
    if (pt_sp > pt_rj) {
        printf("\n>> São Paulo venceu esta rodada!\n");
           pontos_sp++;
           empate = 0;
    } else if (pt_rj > pt_sp) {
        printf("\n>> Rio de Janeiro venceu esta rodada!\n");
           pontos_rj++;
           empate = 0;
    } else {
        printf("\nEmpate! Escolha um novo atributo.\n");
    }
        break;

        default:
        printf("Opção inválida! Tente novamente.\n");
        break;
    }

        printf("=========================================\n\n");
    }
    }

    // Resultado final
    printf("******** RESULTADO FINAL ********\n");
    if (pontos_sp == 2) {
        printf("São Paulo venceu!\n");
    } else {
        printf("Rio de Janeiro venceu!\n");
    }
    printf("********************************\n");


    return 0;
}
