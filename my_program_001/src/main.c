/*
 * ====================
 * file: main.c
 * date: 2019 01 05
 * ====================
 */

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int Fibonacci(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	return (Fibonacci(n-2)+Fibonacci(n-1));
}


int main(void){

	printf("\n");
	printf("====================\n");
	printf("Name: my_program_001\n");
	printf("====================\n");
	printf("\n");



	int n,i;
	double a[3];

	p1:
	a[0]=0;
	a[1]=1;
	a[2]=0;
	printf("\n");
	printf("Enter n fibonacci\n");
	scanf("%d",&n);

	for(i=2;i<=n;i++){
		a[2]=a[0]+a[1];
		a[0]=a[1];
		a[1]=a[2];
	}

	printf("%.0f",a[2]);

goto p1;

	getchar();
	getchar(); //Wait for enter
	return 0;
}
