//https://www.codechef.com/problems/INTEST

#include <stdio.h> 

int main() {
	int i, n, k;
	int count=0, var;
	scanf("%d %d", &n, &k);
	for(i=1; i<=n; i++){
	    scanf("%d", &var);
	    if(var%k==0){
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}

