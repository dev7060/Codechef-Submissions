//https://www.codechef.com/problems/FLOW001

#include <stdio.h> 

int main() {
    int t, i, num1, num2;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n", num1+num2);
    }
	return 0;
}