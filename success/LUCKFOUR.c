//https://www.codechef.com/problems/LUCKFOUR
#include <stdio.h>

int main(void) {
	// your code goes here
	int t, i, count, digit;
	unsigned long int num;
	scanf("%d", &t);
	for(i=0; i<t; i++){
	    count=0;
	    scanf("%lu", &num);
	    while(num){
	        digit=num%10;
	        if(digit==4){
	            count++;
	        }
	        num=num/10;
	    }
	    printf("%d\n", count);
	}
	return 0;
}

