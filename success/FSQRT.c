//https://www.codechef.com/problems/FSQRT
#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t, num, i, sq;
	scanf("%d", &t);
	for(i=1; i<=t; i++){
	    scanf("%d", &num);
	    sq=sqrt(num);
	    printf("%d\n", sq);
	}
	return 0;
}



