#include <stdio.h>

int main() {
    char letra;
    char nome[20] ;
    int idade;
    float altura;


    printf("Olá, mundo! Esse é meu primeiro codigo em C\n");
    printf("Digite o seu nome\n");
    scanf("%s", nome);
    printf("Digite sa idade\n");
    scanf("%d", &idade);
    printf("Digite a sua altura\n");
    scanf("%f", &altura);
    printf("Seu nome é %s, tem %d anos de idade e mede %.2fm de altura", nome, idade, altura);

    //>>>>>>> entrada e saida de dados
    //printf("Letra: %c\n", letra);
    //scanf("Digite uma letra: %c", &letra);Gabriek

    /*
        > Pesquisar sobre funções:
         - Leitura de dados em arquivos:
         fscanf
         fgets e expressões regulares
         
         -Escrita de dados em arquivos:
         fprintf
         fputs

        > Formatos:
         %c - caractere
         %s - string (conjunto de caracteres)
         %d - inteiro (número inteiro)
         %i - inteiro (número inteiro, pode ser decimal, octal ou hexadecimal)   
         %f - ponto flutuante (número com parte decimal)
         %e - notação científica
    */

}