//https://www.codechef.com/ICL2019/problems/ICL1902
#include <stdio.h>


#include <math.h>

int main(void) {
	// your code goes here
	int testcases, num, var, var2, var3, remaining, temp;
	int count;
	scanf("%d", &testcases);
	while(testcases--){
	    count=0;
	    scanf("%d", &num);
	    var=sqrt(num);
	    //printf("%d\n", var);
	    //count=count+1;
	    
	    remaining=num-(var*var);
	    //loop here
	   //printf("%d", remaining);
	   var2=sqrt(remaining);
	   //correct till above
	   temp=var2;
	   while(var2<=remaining){
	        count=count+1;
	        //printf("\n%d", var2);
	        var2=var2+temp;
	        //printf("%d", var2);
	   }
	   //if((var2-var2)!=remaining){
	     //  count=count+1;
	   //}
	  printf("%d\n", count);
	}
	return 0;
}

