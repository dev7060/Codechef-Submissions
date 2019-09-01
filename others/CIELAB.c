#include <stdio.h>
int main(void) {
    int num1, num2, diff, temp, altered_num=0, i=0, digit;
    scanf("%d %d", &num1, &num2);
    diff = num1 - num2;
    temp=diff;
    while(temp!=0){
        digit = temp % 10;
        altered_num = altered_num * 10 + digit;
        temp=temp/10;
    }
    temp=0;
    while(altered_num!=0){
        digit = altered_num %10;
        if(digit!=0 && i==0){
            i++;
            digit = digit - 1;
        }
        else if(digit==0 && i==0){
            digit = digit + 1;
            i++;
        }
        temp = temp * 10 + digit;
        altered_num = altered_num/10;
    }
    //diff=diff-1;
    printf("%d", temp);
	return 0;
}


