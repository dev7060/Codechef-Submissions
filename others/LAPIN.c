#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int i, len, j, flag=0;
        int arr1[200]={0};
        int arr2[200]={0};
        char str[100];
        char temp1[100]="", temp2[100]="";
        flag=0;
        scanf("%s", &str);
        len=strlen(str);
        //printf("%d", len);
        if(len%2==0){
            for(i=0; i<len/2; i++){
                temp1[i]=str[i];
            }
            temp1[i]='\0';
            for(j=i, i=0; j<len; j++, i++){
                temp2[i]=str[j];
            }
            temp2[i]='\0';
            //printf("%s\n", temp1);
            //printf("%s\n", temp2);
        }else{
            for(i=0; i<len/2; i++){
                temp1[i]=str[i];
            }
            temp1[i]='\0';
            for(j=i+1, i=0; j<len; j++, i++){
                temp2[i]=str[j];
            }
            temp2[i]='\0';
            //printf("%s\n", temp1);
            //printf("%s\n", temp2);
        }
        for(i=0; i<strlen(temp1); i++){
            arr1[temp1[i]]++;
        }
        for(i=0; i<strlen(temp2); i++){
            arr2[temp2[i]]++;
        }
        for(i=97; i<123; i++){
            printf("%d %d\n", arr1[i], arr2[i]);
            if(arr1[i]!=arr2[i]){
                flag=1;
                break;
            }
        }
        //printf("%d\n", flag);
        if(flag!=0){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
        
    }
	return 0;
}

