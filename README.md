# Login_C
Login with Password in C language

Além da biblioteca <stdio.h> foi incluída a <string.h>, considerando a utilização de char nome e senha, ambos podendo ser compostos por caracteres.
Entre as entradas, foi incluído o "fflush(stdin)" para limpar o buffet do teclado e receber as duas entradas de string.

Nesse login específico, o nome de usuário não poderia ser igual à senha, portanto, caso fossem digitados iguais, o "!strcmp" identificaria por comparação. No caso de iguais, o usuário recebia a informação de erro e, por meio do while a repetição do requerimento de nome de usuário e senha até que digitasse diferentes. 

Em caso de usuário e senha diferentes, o usuário receberia a informação de êxitos.

Melhoramentos a serem realizados:
1. Incluir no início a informação de que a senha e usuário devem ser diferentes;
2. Permitir a inclusão de nomes com ç ou acentos.
