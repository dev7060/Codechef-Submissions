#include <stdio.h>
int main(void) {
    int n, num, flag, sum, digit;
    scanf("%d", &n);
    while(n--){
        flag=0;
        sum=0;
        scanf("%d", &num);
        while(num>0){
            digit=num%10;
            if(flag==0){
                sum=sum+digit;
            }
            flag++;
            num=num/10;
        }
        if(flag>1){
            sum=sum+digit;
        }
        printf("%d\n", sum);
    }
	return 0;
}

