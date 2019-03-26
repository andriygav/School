#include <stdio.h>
#include <stdlib.h>

int Counter(int N){
	int ret = 0;
	if(N == 3){
		ret = 1;
	}else if(N < 3){
		ret = 0;
	}else{
		if(N%2!=0){
			ret += Counter(N/2+1);
			ret += Counter(N/2);
		}else{
			ret += 2*Counter(N/2);
		}
	}
	return ret;
}

int main(){
	int N;
	scanf("%d", &N);
	printf("%d\n", Counter(N));
	return 0;
}
