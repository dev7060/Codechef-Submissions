//https://www.codechef.com/problems/PRB01
#include <stdio.h>
#include <math.h>
int main(void) {
    int t, i, flag=0;
    int n;
    scanf("%d", &t);
    while(t--){
        flag=0;
        scanf("%d", &n);
        for(i=2; i<(n/2); i++){
            if(n%i==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
	return 0;
}

