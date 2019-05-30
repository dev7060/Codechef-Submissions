//https://www.codechef.com/problems/DIFFSUM
#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b)
        printf("%d", a-b);
    else
        printf("%d", a+b);
	return 0;
}

