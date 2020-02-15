#include <stdio.h>
int main(void) {
    int n, d=0;
    scanf("%d", &n);
    while(n>0){
        d++;
        n/=10;
    }
    switch(d){
        case 1: printf("1"); break;
        case 2: printf("2"); break;
        case 3: printf("3"); break;
        default: printf("More than 3 digits");
    }
	return 0;
}
