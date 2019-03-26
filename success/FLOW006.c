//https://www.codechef.com/problems/FLOW006

#include <stdio.h>

int main(void) {
	// your code goes here
	int n, num, sum=0, digit;
	//input n
	scanf("%d", &n);
	while(n--){
	    sum=0;
      // insert number
      scanf("%d", &num);
      //logic to calculate sum (inside loop)
      while(num){
          digit=num%10;
          sum=sum+digit;
          num=num/10;
      }
      //printf sum
      printf("%d\n", sum);
	}
	return 0;
}

/*
Teset case:
I/P:
3 
12345
31203
2123

O/P:
15
9
8

*/