double exp_natural(int x, int n){
    if (n==0){
        return 1;
    } else if(n==1){
        return 1+x;
    } else{
        double val=1+x;
        double nume,deno;
        for(int i=2;i<=n;i++){
            nume=x;
            deno=1;
            for(int j=1;j<i;j++){
                nume*=x;
            }
            for(double j=1;j<=i;j++){
                deno*=j;
            }            
            val+=nume/deno;
        }
        return val;
    }
}

