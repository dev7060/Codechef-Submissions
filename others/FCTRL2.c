//https://www.codechef.com/problems/FCTRL2

#include <stdio.h>

int main(void) {
	int testcases, i, num, fact;
	scanf("%d", &testcases);
	for(i=1; i<=testcases; i++){
	    fact=1;
	    scanf("%d", &num);
	    while(num>=1){
	        fact=fact*num;
	        num--;
	    }
	    printf("%d\n", fact);
	}
	return 0;
}
