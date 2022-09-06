#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	
	int a,b;
	
	while(t--){
	    scanf("%d%d", &a,&b);
	    int total_choco=a+b;
	    if(total_choco%2 == 0){
	        printf("YES \n");
	    }
	    else{
	        printf("NO \n");
	    }
	}
	return 0;
}

