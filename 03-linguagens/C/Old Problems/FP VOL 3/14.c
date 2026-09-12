#include <stdio.h>
int  main(){
   int P,D1,D2;
   scanf("%d %d %d",&P,&D1,&D2);
   if(P==0){
    if((D1+D2)%2==0){
        printf("%d\n",0);
    } else{
        printf("%d\n",1);
    }
   } else{
        if((D1+D2)%2!=0){
        printf("%d\n",0);
    } else{
        printf("%d\n",1);
    }   
   }
    return 0;
}