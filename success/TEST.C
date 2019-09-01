#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	while(1){
	    scanf("%d", &num);
	    if(num!=42){
	        printf("%d\n", num);
	    }else{
	        break;
	    }
	}
	return 0;
}


