//https://www.codechef.com/problems/HS08TEST

#include <stdio.h>

int main(void) {
	int towithdraw;
	float initialbalance, finalbalance;
	scanf("%d %f", &towithdraw, &initialbalance);
	if((towithdraw%5)!=0){
	    printf("%.2f", initialbalance);
	    return 0;
	}
	if((towithdraw+0.5)>initialbalance){
	    printf("%.2f", initialbalance);
	    return 0;
	    
	}
	finalbalance=initialbalance-towithdraw-0.5;
	printf("%.2f", finalbalance);
	return 0;
}

