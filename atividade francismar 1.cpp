#include <stdio.h>

int main() {
    int num_vacas;
    double leite_total = 0.0;

    printf("Informe a quantidade de vacas que possui: ");
    scanf("%d", &num_vacas);

    for (int i = 1; i <= num_vacas; i++) {
        double leite_vaca;
        printf("Informe a quantidade de leite ordenhado para a vaca %d: ", i);
        scanf("%lf", &leite_vaca);
        leite_total += leite_vaca;
    }

    printf("O total de leite ordenhado de todas as vacas: %.2f litros\n", leite_total);

    return 0;
}