#include <stdio.h>
void func(char string[]); 

int main(){
    char string[101]={0};
    scanf("%s",string);
    func(string);
    printf("\n");
    return 0;
}

void func(char string[]){
    static char X[101]; 
    static int k=0;
    static int flag = 0;
    
    if(string[0]=='\0'){
        if (flag==0){
            flag++;
            func(X);
            return; 
        }
        return; 
    }
    
    if (string[0]==120 && flag==0){ 
        X[k] = string[0];
        k++;
        string++; 
        func(string); 
    } else{
        printf("%c",string[0]);
        string++; 
        func(string); 
    }
}