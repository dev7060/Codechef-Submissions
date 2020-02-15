#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int num, temp, no_of_digits=0, i;
        char arr1[1000]="", arr2[1000]="", temp[1000]="";
        scanf("%d", &num);
        temp=num;
        while(temp>0){
            no_of_digits++;
            temp=temp/10;
        }
        for(i=1; i<=no_of_digits; i++){
            strcat(arr1, "0");
            strcat(arr2, "1");
        }
        
    }
	return 0;
}
