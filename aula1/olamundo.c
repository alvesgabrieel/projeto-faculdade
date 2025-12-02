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

        > Especificadores de formatos:
         %c - caractere
         %s - string (conjunto de caracteres)
         %d - inteiro (número inteiro)
         %ld - long int
         %lld - long long int
         %i - inteiro (número inteiro, pode ser decimal, octal ou hexadecimal)   
         %f - ponto flutuante (número com parte decimal)
         %e - notação científica

         >>> modificadores:
         unsigned: trabalha apenas com valores positivos, aumentando sua capacidade 
         long: deixa a capacidade de trabalhar com valores maiores e mais precisos
         short:consumo de memória é menor, diminui a quantidade de bytes disponivéis, é bom para variáveis de tamanho menor
    */

}