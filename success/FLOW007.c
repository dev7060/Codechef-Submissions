//https://www.codechef.com/problems/FLOW007
#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, num, rev=0, digit;
	scanf("%d", &t);
	for(i=0; i<t; i++){
	    rev=0;
	    scanf("%d", &num);
	    while(num){
	        digit=num%10;
	        rev=(rev*10)+digit;
	        num=num/10;
	    }
	    printf("%d\n", rev);
	}
	return 0;
}

