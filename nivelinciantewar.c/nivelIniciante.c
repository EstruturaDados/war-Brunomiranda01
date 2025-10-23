#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio t[5];
    int i;

    printf("=== Cadastro de Territorios ===\n");

    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", t[i].nome);

        printf("Cor do exercito: ");
        scanf("%s", t[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &t[i].tropas);
    }

    printf("\n=== Territorios cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritorio %d\n", i + 1);
        printf("Nome: %s\n", t[i].nome);
        printf("Cor: %s\n", t[i].cor);
        printf("Tropas: %d\n", t[i].tropas);
    }

    return 0;
}