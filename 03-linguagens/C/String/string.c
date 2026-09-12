#include <stdio.h>
#include <stdlib.h>

void *reallocc(char *string, size_t size);
char *scanfstr();
size_t sizeofstr(char *string);
void cpystr(char **string, char *string2);

int main(){
    char *string1 = scanfstr();
    char *string2 = scanfstr();
    if (string1 == NULL ||string2 == NULL) goto fim;

    cpystr(&string1, string2);
    printf("%s", string1);
    printf("\n%zu\n", sizeofstr(string1));

    fim:
    if (string1 != NULL ) free(string1);
    if (string2 != NULL ) free(string2);
    return 0;
}

void cpystr(char **string1, char *string2){
    int size = sizeofstr(string2);
    *string1 = reallocc (*string1, size); 
    int i;
    for (i=0; i<size; i++) (*string1)[i] = string2[i];
    return;
}

size_t sizeofstr(char *string){
    size_t n = 0;
    while (string[n++] != '\0');
    return n;
}

char *scanfstr(){
    char temp [1001]={0}; 
    char *string = NULL;
    scanf(" %[^\n]", temp);
    getchar();
    cpystr(&string, temp);
    return string;
}
void *reallocc(char* string, size_t size){
    void *ptr = realloc(string, size);
    if (ptr==NULL){
        free(string);
        printf("Erro na alocação da memória.\n");
        return NULL;
    }
    return ptr;
}