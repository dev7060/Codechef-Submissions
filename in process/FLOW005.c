//https://www.codechef.com/problems/FLOW005
#include <stdio.h>

int main(void) {
	// your code goes here
    int t, amt, n=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &amt);
        for(i=0; i<=amt; i=i+100){
            n++;
        }
        for(i=0; i<=amt; i=i+50){
            n++;
        }
        for(i=0; i<=amt; i=i+10){
            n++;
        }
        for(i=0; i<=amt; i=i+5){
            n++;
        }
        for(i=0; i<=amt; i=i+1){
            n++;
        }
        
    }
	return 0;
}

