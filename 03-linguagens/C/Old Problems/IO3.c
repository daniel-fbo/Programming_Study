#include <stdio.h>
#include <sqlite3.h>

int main(void){
    sqlite3 *db;
    char *error = NULL; //msg de erro
    int status; //flag
    
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


    status = sqlite3_open("pessoas.db", &db);
    if (status != SQLITE_OK) {
        fprintf(stderr, "erro ao abrir banco: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    const char *sql_criar = "CREATE TABLE IF NOT EXISTS pessoas (nome TEXT, idade INTEGER);"; // COMANDO SQL
    status = sqlite3_exec(db, sql_criar, NULL, NULL, &error);
    if (status != SQLITE_OK) {
        fprintf(stderr, "erro ao criar tabela: %s\n", error);
        sqlite3_free(error);
        sqlite3_close(db);
        return 1;
    }

    fout = fopen("fout.csv", "r");
    if (!fout) { fprintf(stderr, "erro: fout nn abriu pra leitura\n"); return 1; }

    char nome[50];
    int idade;

    fscanf(fout, "%*[^\n]\n");   
    sqlite3_stmt *stmt;

    const char *sql_inserir = "INSERT INTO pessoas (nome, idade) VALUES (?, ?);";
    sqlite3_prepare_v2(db, sql_inserir, -1, &stmt, NULL);

    while (fscanf(fout, " %[^,], %d\n", nome, &idade) == 2) {
        sqlite3_bind_text(stmt, 1, nome, -1, SQLITE_STATIC);
        sqlite3_bind_int(stmt, 2, idade);

        status = sqlite3_step(stmt);
        if (status != SQLITE_DONE) {
            fprintf(stderr, "erro ao inserir: %s\n", sqlite3_errmsg(db));
        }

        sqlite3_reset(stmt);   // prepara o statement pra reutilizar na proxima linha
    }

    sqlite3_finalize(stmt);
    fclose(fout);
    sqlite3_close(db);
    return 0;
}






