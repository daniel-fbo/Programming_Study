//verificar o maximo começando pelo 1 e o maximo começando pelo 2

#include <stdio.h>

int main(){
    int totalNum, nums[501], max1=0, max2=0, temp;
    scanf("%d", &totalNum);
    for (int i = 0; i<totalNum; i++){scanf("%d", &nums[i]);}

    temp = 2;
    for(int i=0; i<totalNum;i++){
        if(nums[i] != temp){
            max1++;
            temp = nums[i];
        }
    }

    temp = 1;
    for(int i=0; i<totalNum;i++){
        if(nums[i] != temp){
            max2++;
            temp = nums[i];
        }
    }

    if (max1>max2){
        printf("%d", max1);
    } else{
        printf("%d", max2);
    }
    return 0;
}
