#include <stdio.h>

int main(void){
    FILE* fin = fopen("fin.csv","w+");
    if (!fin) fprintf(stderr,"erro: fin nn abriu");
    FILE* fout = fopen("fout.csv","w");
    if (!fout) fprintf(stderr,"erro: fout nn abriu");
    
    fprintf(fin, "nome,idade\n");
    fprintf(fin, "Daniel, 19\n");
    fprintf(fin, "Joao, 20\n");
    rewind(fin);

    int c;
    while ((c = fgetc(fin)) != EOF){
        fputc(c, fout);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}






