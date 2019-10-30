#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 2500
#define n 2500
#define p 2500
#define x 2500

	double A[m][n], B[n][p], C[m][p], D[x];

int main(){
	
	int i, j, k, y;
	clock_t start, end;
	
	start = clock();
	
	for(i=0; i<m; i++)
	{
		for(y=0; y<x; y++)
			D[y] = A[i][y];
			for(k=0; k<n; k++)
				for(j=0; j<p; j++)
					C[i][j] += D[k] * B[k][j];
	}
	
	end = clock();
	
	double exec_time = end - start;
	printf("%f sec", exec_time/CLOCKS_PER_SEC);
	
	return 0;
} 
