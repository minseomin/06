#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	int a, b;
	a=get_integer();
	b=get_integer();
	printf("c(%d,%d)=%d\n",a,b,combination(a,b));
	return 0;
}

int combination(int n, int r){
	return(factorial(n)/(factorial(r)*factorial(n-r)));
}

int factorial(int n)
{
	int res = 1;
	int i;
	for(i=1; i<=n; i++)
	{
		res = res*i;
	}
	return res;
}

int get_integer (void){
	int n;
	printf("정수를 입력하시오 :");
	scanf("%d", &n);
	return n;
}


