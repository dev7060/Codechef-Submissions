//https://www.codechef.com/problems/TWOVSTEN
#include <stdio.h>
int main(void) {
    int t, x, nt;
    scanf("%d", &t);
    while(t--){
        nt=0;
        scanf("%d", &x);
        while(x%10!=0){
            x=x*2;
            nt=nt+1;
        }
        printf("%d\n", nt);
    }
	return 0;
}

