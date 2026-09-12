int faz_conta_direito(int parcelas, char op){
    int n, sum;
    scanf("%d",&sum);
    parcelas--;
    if (op == '+'){
        while (parcelas!=0){
            scanf(" %d",&n);
            sum+=n;
            parcelas--;
        }
    } else{
        while (parcelas!=0){
            scanf(" %d",&n);
            sum-=n;
            parcelas--;
        }        
    }
    return sum;
}