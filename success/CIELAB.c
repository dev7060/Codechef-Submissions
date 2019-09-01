#include <stdio.h>
int main(void) {
    int diff, num1, num2;
    scanf("%d %d", &num1, &num2);
    diff = num1 - num2;
    if(diff%10==9){
        printf("%d", diff-1);
    }
    else{
        printf("%d", diff+1);
    }
	return 0;
}


