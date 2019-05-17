//https://www.codechef.com/submit/RECTANGL
#include <stdio.h>
#include <math.h>
int main(void) {
    int t, arr[4], i, j, flag, c=0, val;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
        for(i=0; i<4; i++){
            val=arr[i];
            for(j=i+1; j<4; j++){
                if(val=arr[j]){
                    flag=1;
                }
            }
        }
        if(flag==2){
            printf("YES");
        }
        else{
            printf("NO");
        }
        
    }
	return 0;
}

