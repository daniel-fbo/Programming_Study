#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
int main(void){
    char lixo;

    // real syscall 
    char c0;
    

    syscall(SYS_write, 1, "Digite um char: ", 17);
    syscall(SYS_read, 0, &c0, 1);
    syscall(SYS_read, 0, &lixo, 1);     
    syscall(SYS_write, 1, "Voce digitou: ", 14);
    syscall(SYS_write, 1, &c0, 1);
    syscall(SYS_write, 1, "\n", 1);
    if (c0 == 'x') {
      syscall(SYS_write, 2, "Erro: char invalido!\n", 22);   
    }

    // syscall nutella
    char c;
    write(1, "Digite um char: ", 17);
    read(0, &c, 1);
    read(0, &lixo, 1);
    write(1, "Voce digitou: ", 14);
    write(1, &c, 1);
    write(1, "\n", 1);
    if (c == 'x') {
        write(2, "Erro: char invalido!\n", 22);  
    }

    // manipulando stream
    char c2;
    fprintf(stdout, "Digite um char: ");
    fflush(stdout);
    c2 = fgetc(stdin);
    getchar();
    fprintf(stdout, "Voce digitou: %c\n", c2);
    if (c2 == 'x') {
        fprintf(stderr, "Erro: char invalido!\n");  
    }

    // beta mode
    char c3;
    printf("Digite um char: ");
    fflush(stdout);
    c3 = getchar();
    getchar();
    printf("Voce digitou: %c\n", c3);
    if (c3 == 'x') {
        fprintf(stderr, "Erro: char invalido!\n");   // OBRIGATORIAMENTE fprintf, não existe "errorf()"
    }
    return 0;
}




