#include <stdio.h>
#include <sqlite3.h>

int main(void){
    sqlite3 *db;
    int status;
    char *error;

    FILE* fin = fopen("fin.csv","w+"); if (!fin) fprintf(stderr,"erro: fin nn abriu");
    FILE* fout = fopen("fout.csv","w"); if (!fout) fprintf(stderr,"erro: fout nn abriu");
    
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

    status = sqlite3_open("pessoas.csv",&db);
    if (status != SQLITE_OK){
        fprintf(stderr,"erro ao abrir o banco\n", sqlite3_errmsg);
        return 1;
    }

    const char *sql_criar = "CREATE TABLE IF NOT EXISTS (nome TEXT, idade INTEGER";
    status = sqlite3_exec(db, sql_criar, NULL, NULL, &error);
    if (status != SQLITE_OK){
        fprintf(stderr,"erro ao abrir o banco\n", sqlite3_errmsg);
        fclose(db);
        return 1;
    }


    return 0;
}






