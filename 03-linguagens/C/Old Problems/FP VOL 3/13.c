#include <stdio.h>
int  main(){
    char a,string[10000]={0};
    int b;
    scanf("%c %d %[^\n]",&a,&b,&string);
    if(a=='M'){
        for(int i=0;i<b;i++){
            if(string[i]>90){
                printf("%c",string[i]-32);
            } else if(string[i]==32){
                printf(" ");
            } else {
                printf("%c",string[i]);
            }
        }

    } else if (a=='m'){
        for(int i=0;i<b;i++){
            if(string[i]<97 && string[i]!=32){
                printf("%c",string[i]+32);
            } else if(string[i]==32){
                printf(" ");
            }else {
                printf("%c",string[i]);
            }
        }   
    } else{
        for(int i=0;i<b;i++){
            if(i==0 || string[i-1]==32){
                if(string[i]>90){
                    printf("%c",string[i]-32);
                } else{
                    printf("%c",string[i]);
                }
            } else if(string[i]==32){
                printf(" ");
            } else{
                if(string[i]<97){
                    printf("%c",string[i]+32);
                } else{
                    printf("%c",string[i]);
                }
            }
        }
    }  
    return 0;
}