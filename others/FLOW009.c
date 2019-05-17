//https://www.codechef.com/submit/FLOW009
#include <stdio.h>
int main(void) {
    int t;
    int qty, price;
    float total;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &qty, &price);
        if(qty>1000)
            total=(qty*price)-(0.1*qty*price);
        else
            total=qty*price;
        printf("%f\n", total);
    }
	return 0;
}

