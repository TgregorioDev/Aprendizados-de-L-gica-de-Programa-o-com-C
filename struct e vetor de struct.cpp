#include <stdio.h>
#include <stdlib.h>

struct tp_endereco {
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[3];
    int cep;
};

struct tp_data_nascimento {
    int dia;
    int mes;
    int ano;
};

struct cad_cliente {
    char nome_cliente[40];
    int telefone;
    struct tp_endereco endereco;
    struct tp_data_nascimento data_nascimento;
} cad_cliente[2];

int main(void) {
    int i;
    printf("\n\n-------- Cadastro de Clientes --------\n\n");

    for(i = 0; i < 2; i++) {
        printf("\n\nNome do cliente............: ");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("\nDigite o telefone do cliente.....: ");
        scanf("%d", &cad_cliente[i].telefone);

        printf("\nDigite a rua ........: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.rua);

        printf("\nDigite o numero ...........: ");
        scanf("%d", &cad_cliente[i].endereco.numero);

        printf("\nBairro..............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);

        printf("\nCidade...............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);

        printf("\nEstado..............: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.estado);

        printf("\nDigite o CEP..........: ");
        scanf("%d", &cad_cliente[i].endereco.cep);

        printf("\nDia do Nascimento...........: ");
        scanf("%d", &cad_cliente[i].data_nascimento.dia);

        printf("\nMes de Nascimento.............: ");
        scanf("%d", &cad_cliente[i].data_nascimento.mes);

        printf("\nAno de Nascimento..........: ");
        scanf("%d", &cad_cliente[i].data_nascimento.ano);
    }

    printf("\n\n------- Dados dos Clientes --------\n\n");
    for(i = 0; i < 2; i++) {
        printf("\nNome..............: %s", cad_cliente[i].nome_cliente);
        printf("\nRua..............: %s", cad_cliente[i].endereco.rua);
        printf("\nNumero..............: %d", cad_cliente[i].endereco.numero);
        printf("\nBairro..............: %s", cad_cliente[i].endereco.bairro);
        printf("\nCidade..............: %s", cad_cliente[i].endereco.cidade);
        printf("\nEstado..............: %s", cad_cliente[i].endereco.estado);
        printf("\nCep..............: %d", cad_cliente[i].endereco.cep);

        printf("\nDia de Nascimento: %d", cad_cliente[i].data_nascimento.dia);
        printf("\nMes de Nascimento: %d", cad_cliente[i].data_nascimento.mes);
        printf("\nAno de Nascimento: %d", cad_cliente[i].data_nascimento.ano);
    }

    system("pause");
    return 0;
}
