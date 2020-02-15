#include <stdio.h>
int main(void) {
    int n, arr[1000], i=0, even_sum=0, odd_sum=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            even_sum++;
        }else{
            odd_sum++;
        }
        i++;
    }
    if(even_sum>odd_sum){
        printf("READY FOR BATTLE");
    }else{
        printf("NOT READY");
    }
    return 0;
}

