<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

int main(){

    char nome[100], senha[100];

    printf("Informe um nome de usuário: ");
    gets(nome);
    fflush(stdin);
    printf("insira nova senha diferente do nome de usuário: ");
    gets(senha);

    while(!strcmp(nome, senha)){
        printf("ERROR\n");
        fflush(stdin);
        printf("Informe um nome de usuário: ");
        gets(nome);
        fflush(stdin);
        printf("insira nova senha: ");
        gets(senha);
    }
    printf ("Usuário e Senha registrados com sucesso!\n");
    printf("O usuário é %s e a senha é %s.", nome, senha);
=======
#include <stdio.h>
#include <string.h>

int main(){

    char nome[100], senha[100];

    printf("Informe um nome de usuário: ");
    gets(nome);
    fflush(stdin);
    printf("insira nova senha diferente do nome de usuário: ");
    gets(senha);

    while(!strcmp(nome, senha)){
        printf("ERROR\n");
        fflush(stdin);
        printf("Informe um nome de usuário: ");
        gets(nome);
        fflush(stdin);
        printf("insira nova senha: ");
        gets(senha);
    }
    printf ("Usuário e Senha registrados com sucesso!\n");
    printf("O usuário é %s e a senha é %s.", nome, senha);
>>>>>>> d8ca86c265c6820a3c248e83edf1b64ca47090ef
}