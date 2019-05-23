//https://www.codechef.com/problems/CHOPRT
#include <stdio.h>
#include <math.h>
int main(void) {
    int t, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if(a==b)
            printf("=\n");
    }
	return 0;
}

