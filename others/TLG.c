//https://www.codechef.com/problems/TLG
#include <stdio.h>

int main(void) {
	int rounds;
	int pl1[100], pl2[100], m=0, n=0, i;
	int pl1leadcount=0, pl2leadcount=0;
	int temp;
	//int pl1eachroundlead[100], pl2eachroundlead[100];
	int sum1=0, sum2=0;
	int var1, var2;
	scanf("%d", &rounds);
	for(i=0; i<rounds; i++){
	    scanf("%d %d", &pl1[i], &pl2[i]);
	    //printf("%d\t %d\n", pl1[i], pl2[i]);
	    //printf("%d\t %d", pl2[i]);
	    var1=pl1[i];
	    var2=pl2[i];
	    if(var1>var2){
	        //pl1eachroundlead[m]=pl1[i]-pl2[i];
	        printf("if 1 enter");
	        temp=pl1[i]-pl2[i];
	        //printf("%d\n", temp);
	        sum1=sum1+temp;
	        //printf("\n%d", sum1);
	        //m++;
	        pl1leadcount++;
	    }
	    if(var2>var1){
	        //pl2eachroundlead[n]=pl2[i]-pl1[i];
	        printf("if 2 enter");
	        temp=pl2[i]-pl1[i];
	        sum2=sum2+temp;
	        //n++;
	        //printf("\n%d\n", sum2);
	        pl2leadcount++;
	    }
	}
	/*sum1=0; //containing total leadamount of pl1
	sum2=0; //containing total lead amount of pl2
	for(i=0; i<m; i++){
	       sum1=sum1+pl1eachroundlead[i];
	 }
	 for(i=0; i<n; i++){
	       sum2=sum2+pl2eachroundlead[i];
	 }
	 */
	 //or can compare with pl1eachroundlead, pl2eachroundlead
	 //printf("\n%d", sum1);
	 //printf("\n%d", sum2);
	 //printf("\n%d", pl1leadcount);
	 //printf("\n%d", pl2leadcount);
	if(pl1leadcount>pl2leadcount){
	    printf("1 %d", sum1-sum2);
	}
	else{
	    printf("2 %d", sum2-sum1);
	}
	return 0;
}
