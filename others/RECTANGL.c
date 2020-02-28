#include <stdio.h>
int main(void) {
    int t, a[4];
    int temp1, temp2, i, count1=0, count2=0;
    scanf("%d", &t);
    while(t--){
        count1=0; count2=0;
        scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
        temp1=a[0];
        temp1=a[0];
        for(i=0; i<4; i++){
            if(temp1==a[i]){
                count1++;
            }else{
                temp2=a[i];
            }
        }
        for(i=0; i<4; i++){
            if(temp2==a[i]){
                count2++;
            }
        }
        //printf("%d %d ", count1, count2);
        if(count1==count2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}
