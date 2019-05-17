//https://www.codechef.com/submit/SMPAIR
#include <stdio.h>
#include <math.h>
int main(void) {
    int t, n, arr[100], i, j, min;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        min=arr[0]+arr[1];
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(arr[i]+arr[j]<min){
                    min=arr[i]+arr[j];
                }
            }
        }
        printf("%d\n", min);
    }
	return 0;
}

