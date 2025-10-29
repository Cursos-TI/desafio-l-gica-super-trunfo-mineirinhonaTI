#include <stdio.h>

int main()
{
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

    int pontos_sp = 0, pontos_rj = 0;

    printf("=========================================\n");
    printf(" JOGO SUPER TRUNFO PAÍSES - BRASIL     \n");
    printf("=========================================\n");
    printf("Cartas em jogo:\nSão Paulo  x  Rio de Janeiro\n");
    printf("=========================================\n\n");

    while (pontos_sp < 2 && pontos_rj < 2)
    {
        int opcao1 = 0, opcao2 = 0;
        float soma_sp = 0, soma_rj = 0;

        // Escolha do primeiro atributo
        do
        {
            printf("Escolha o PRIMEIRO atributo para comparar:\n");
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - Pontos Turísticos\n");
            printf("Digite sua opção: ");
            scanf("%d", &opcao1);
            if (opcao1 < 1 || opcao1 > 5)
                printf("Opção inválida! Tente novamente.\n\n");
        } while (opcao1 < 1 || opcao1 > 5);

        // Escolha do segundo atributo (if (i==opcao1)continue) faz com que o programa pule (não exiba) o atributo já escolhido antes.
        do
        {
            printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
            for (int i = 1; i <= 5; i++)
            {
                if (i == opcao1)
                    continue;
                switch (i)
                {
                case 1:
                    printf("1 - População\n");
                    break;
                case 2:
                    printf("2 - Área\n");
                    break;
                case 3:
                    printf("3 - PIB\n");
                    break;
                case 4:
                    printf("4 - Densidade Populacional\n");
                    break;
                case 5:
                    printf("5 - Pontos Turísticos\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                }
            }
            printf("Digite sua opção: ");
            scanf("%d", &opcao2);
            if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1)
                printf("Opção inválida! Escolha um atributo diferente do primeiro.\n\n");
        } while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1);

        printf("\n=========================================\n");
        printf("Comparando São Paulo x Rio de Janeiro\n");
        printf("=========================================\n");

        // Função auxiliar de comparação via switch
        for (int rodada = 1; rodada <= 2; rodada++)
        {
            int atributo = (rodada == 1) ? opcao1 : opcao2;
            switch (atributo)
            {
            case 1:
                printf("\nComparando POPULAÇÃO:\n");
                printf("São Paulo: %d habitantes\n", pop_sp);
                printf("Rio de Janeiro: %d habitantes\n", pop_rj);
                printf(">> %s venceu neste atributo!\n",
                       (pop_sp == pop_rj) ? "Empate" : (pop_sp > pop_rj ? "São Paulo" : "Rio de Janeiro"));
                soma_sp += pop_sp;
                soma_rj += pop_rj;
                break;

            case 2:
                printf("\nComparando ÁREA:\n");
                printf("São Paulo: %.2f km²\n", area_sp);
                printf("Rio de Janeiro: %.2f km²\n", area_rj);
                printf(">> %s venceu neste atributo!\n",
                       (area_sp == area_rj) ? "Empate" : (area_sp > area_rj ? "São Paulo" : "Rio de Janeiro"));
                soma_sp += area_sp;
                soma_rj += area_rj;
                break;

            case 3:
                printf("\nComparando PIB:\n");
                printf("São Paulo: %.2f bilhões\n", pib_sp);
                printf("Rio de Janeiro: %.2f bilhões\n", pib_rj);
                printf(">> %s venceu neste atributo!\n",
                       (pib_sp == pib_rj) ? "Empate" : (pib_sp > pib_rj ? "São Paulo" : "Rio de Janeiro"));
                soma_sp += pib_sp;
                soma_rj += pib_rj;
                break;

            case 4:
                printf("\nComparando DENSIDADE POPULACIONAL (menor vence):\n");
                printf("São Paulo: %.2f hab/km²\n", dens_sp);
                printf("Rio de Janeiro: %.2f hab/km²\n", dens_rj);
                printf(">> %s venceu neste atributo!\n",
                       (dens_sp == dens_rj) ? "Empate" : (dens_sp < dens_rj ? "São Paulo" : "Rio de Janeiro"));
                soma_sp += dens_sp;
                soma_rj += dens_rj;
                break;

            case 5:
                printf("\nComparando PONTOS TURÍSTICOS:\n");
                printf("São Paulo: %d\n", pt_sp);
                printf("Rio de Janeiro: %d\n", pt_rj);
                printf(">> %s venceu neste atributo!\n",
                       (pt_sp == pt_rj) ? "Empate" : (pt_sp > pt_rj ? "São Paulo" : "Rio de Janeiro"));
                soma_sp += pt_sp;
                soma_rj += pt_rj;
                break;

            default:
                printf("Atributo inválido.\n");
            }
        }

        // Resultado da rodada pela soma
        printf("\n=========================================\n");
        printf("Soma dos atributos:\n");
        printf("São Paulo: %.2f | Rio de Janeiro: %.2f\n", soma_sp, soma_rj);

        if (soma_sp == soma_rj)
        {
            printf("\n>> Empate nesta rodada!\n");
        }
        else
        {
            printf("\n>> %s venceu a rodada!\n",
                   (soma_sp > soma_rj) ? "São Paulo" : "Rio de Janeiro");
            (soma_sp > soma_rj) ? pontos_sp++ : pontos_rj++;
        }

        printf("=========================================\n");
        printf("Placar atual: São Paulo %d x %d Rio de Janeiro\n", pontos_sp, pontos_rj);
        printf("=========================================\n\n");
    }

    // Resultado final
    printf("******** RESULTADO FINAL ********\n");
    printf("%s venceu o jogo!\n", (pontos_sp > pontos_rj) ? "São Paulo" : "Rio de Janeiro");
    printf("********************************\n");

    return 0;
}
