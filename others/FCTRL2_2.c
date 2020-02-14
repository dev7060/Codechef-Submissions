#include <stdio.h>
int main(void) {
    int n, num, i, fact;
    scanf("%d", &n);
    if(n>=1&&n<=100){
        while(n--){
            scanf("%d", &num);
            if(num>=1&&num<=100){
                fact=1;
                for(i=num; i>=1; i--){
                    fact=fact*i;
                }
                printf("%d\n", fact);
            }
        }   
    }
	return 0;
}

