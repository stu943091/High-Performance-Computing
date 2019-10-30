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
	double f;
	clock_t start, end;
	
	start = clock();
	
	for(i=0; i<m; i++)
	{
		for(y=0; y<x; y++)
			D[y] = B[y][i];
		for(j=0; j<p; j++)
		//{
			//f = 0;
			for(k=0; k<n; k++)
				C[j][i] += A[j][k] * D[k];
				//f += A[j][k] * D[k];
			//C[j][i] = f;
		//}
			
	}
	
	end = clock();
	
	double exec_time = end - start;
	printf("%f sec", exec_time/CLOCKS_PER_SEC);
	
	return 0;
} 
