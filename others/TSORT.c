//https://www.codechef.com/problems/TSORT
/*
#include <iostream>
using namespace std;

int main() {
	int n, i, k, arr[1000], temp, m, min;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
	    scanf("%d", &arr[i]);
	}
    //logic here
    for(i=1; i<=n; i++){
        min=arr[i];
        for(m=i; m<=((n-i)+1); m++){
            if(arr[m]<min){
                temp=arr[i];
                min=arr[m];
                arr[m]=arr[i];
            }
        }
        arr[i]=min;
    }
    //array o/p here
    for(i=1; i<=n; i++){
        printf("%d\n", arr[i]);
    }
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() {
	int n, i, k, arr[1000], temp, m, min, ptr;
    //input n
	scanf("%d", &n);
	//input array
	for(i=1; i<=n; i++){
	    scanf("%d\n", &arr[i]);
	}
    //logic here : move the minimum of all to the first place
        //loop from i=1 to i<=n-1
        for(i=1; i<=(n-1); i++){
        //start a loop with currentvalue+1 (let ptr) to = n
            for(ptr=i+1; ptr<=n; ptr++){
        //if ptr<arr[i]
                if(arr[ptr]<arr[i]){
            //interchange ptr and min
                    temp=arr[i];
                    arr[i]=arr[ptr];
                    arr[ptr]=arr[i];
                }
            }
        }
    //array o/p here
    for(i=1; i<=n; i++){
        printf("%d\n", arr[i]);
    }
	return 0;
}
*/