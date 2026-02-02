#include <stdio.h>
#include <string.h>

#define TAM_STRING 30

//Estrutura Para os territorios (Struct)
struct Territorio{

    char Nome[TAM_STRING];
    char Cor[TAM_STRING];
    int Tropas;

};

//limpa o "\n" deixado pelo scanf.
void limparBufferEntrada() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

//Função Principal

int main(){

struct Territorio Terreno[TAM_STRING];


    printf("=========================================\n");
    printf("===== Vamos cadastrar os territorios=====\n\n");
    for(int i = 1; i < 5; i++){
    printf("--------- Cadastro Território -----------\n");
    printf("Nome do território: ");
    fgets(Terreno->Nome, TAM_STRING, stdin);
    printf("\nQual a cor do seu território: ");
    fgets(Terreno->Cor, TAM_STRING, stdin);
    printf("\nNúmero de tropas: ");
    scanf("%d", &Terreno->Tropas);

    }









 













}