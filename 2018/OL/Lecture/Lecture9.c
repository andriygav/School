#include <stdlib.h>
#include <stdio.h>

int main(){
	float arr[1000][1000];
	float brr[1000][1000];
	int N=0, M =0;
	scanf("%d %d", &N, &M);
	
	for(int i =1; i <= N+1; i++){
		brr[i][0] = 1000;
		brr[0][i] = 1000;
		brr[i][M] = 1000;
		brr[N][i] = 1000;
	}
	
	for(int i =1; i <= N; i++){
		for(int j =1; j <= M; j++){
			scanf("%f", &arr[i][j]);
		}
	}
	
	brr[1][1] = arr[1][1];
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= M; j++){
			if(brr[i - 1][j] > brr[i][j - 1]){
				if(j > 1){
					brr[i][j] = brr[i][j-1];
				}
			}else{
				if(i > 1){
					brr[i][j] = brr[i-1][j];
				}
			}
			brr[i][j] += arr[i][j];
		}
	}
	printf("%f\n", brr[N-1][M-1]);
	return 0;
}
