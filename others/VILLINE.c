#include <stdio.h>
int main(void) {
    int no_of_houses;
    int m, c;
    int x[100], y[100], p[100];
    int i;
    int left=0, right=0;
    scanf("%d", &no_of_houses);
    scanf("%d %d", &m, &c);
    for(i=0; i<no_of_houses; i++){
        scanf("%d %d %d", &x[i], &y[i], &p[i]);
        //printf("%d %d %d\n", x[i], y[i], p[i]);
    }
    for(i=0; i<no_of_houses; i++){
        if(y[i]<=0 && x[i]>=0){
            right = right + p[i];
        }
    
        if(y[i]<=0 && x[i]>=0){
            left = left + p[i];
        }
        
        if(x[i]>0 && y[i]>0){
            if(x[i]>y[i]){
                right = right + p[i];
            }
            else{
                left = left + p[i];
            }
        }
        if(y[i]<0 && x[i]<0){
            if(x[i]<y[i]){
                left = left + p[i];
            }
            else{
                right = right + p[i];
            }
        }
    }
    if(left>=right){
        printf("%d", left);
    }
    else{
        printf("%d", right);
    }
    return 0;
}

