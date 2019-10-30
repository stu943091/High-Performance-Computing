#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define m 2500
#define n 2500
#define p 2500

	double A[m][n], B[n][p], C[m][p];

int main(){
	
	int i, j, k;
	double f;
	clock_t start, end;
	
	start = clock();
	
	for(i=0; i<(m/2); i++)
		for(j=0; j<(p/2); j++)
			for(k=0; k<(n/2); k++)
			{
				C[2*i][2*j] += A[2*i][2*k] * B[2*k][2*j] + A[2*i][2*k+1] * B[2*k+1][2*j];
				C[2*i][2*j+1] += A[2*i][2*k] * B[2*k][2*j+1] + A[2*i][2*k+1] * B[2*k+1][2*j+1];
				C[2*i+1][2*j] += A[2*i+1][2*k] * B[2*k][2*j] + A[2*i+1][2*k+1] * B[2*k+1][2*j];
				C[2*i+1][2*j+1] += A[2*i+1][2*k] * B[2*k][2*j+1] + A[2*i+1][2*k+1] * B[2*k+1][2*j+1];
			}
	
	end = clock();
	
	double exec_time = end - start;
	printf("%f sec", exec_time/CLOCKS_PER_SEC);
	
	return 0;
} 
