//https://www.codechef.com/problems/TLG
#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a[100], b[100];
	int max1lead=0, max2lead=0;
	int diff;
	int i;
	scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d", &a[i], &b[i]);
        if(a[i]>b[i]){
            diff=a[i]-b[i];
            if(i==0){
                max1lead=diff;
            }
            else{
                if(diff>max1lead){
                    max1lead=diff;
                }
            }
        }
        else{
            diff=b[i]-a[i];
            if(i==0){
                max2lead=diff;
            }
            else{
                if(diff>max2lead){
                    max2lead=diff;
                }
            }
        }
    }
    //printf("%d\n", l1count);
    //printf("%d\n", l2count);
    //printf("%d\n", max1lead);
    //printf("%d\n", max2lead);
    if(max1lead>max2lead){
        printf("1 %d", max1lead);
    }
    else{
        printf("2 %d", max2lead);
    }
	return 0;
}

