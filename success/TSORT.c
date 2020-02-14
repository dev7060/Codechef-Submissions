#include <stdio.h>
int main(void) {
    int n, temp, arr[1000000]={0};
    scanf("%d", &n);
    while(n--){
        scanf("%d", &temp);
        arr[temp]++;
    }
    for(n=0; n<1000000; n++){
        while(arr[n]>0){
            printf("%d\n", n);
            arr[n]--;
        }
    }
	return 0;
}
