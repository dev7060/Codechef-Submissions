#include <stdio.h>
int main(void) {
    int l, b, ar, pr;
    scanf("%d", &l);
    scanf("%d", &b);
    ar=l*b;
    pr=2*(l+b);
    if(ar>pr){
        printf("Area\n%d", ar);
    }else if(pr>ar){
        printf("Peri\n%d", pr);
    }else{
        printf("Eq\n%d", pr);
    }
	return 0;
}
