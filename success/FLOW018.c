//https://www.codechef.com/problems/FLOW018
#include <stdio.h>
int main(void) {
	// your code goes here
	int t, n, fact, i;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    fact=1;
	    for(i=n; i>=1; i--){
	        fact=fact*i;
	    }
	    printf("%d\n", fact);
	}
	return 0;
}

