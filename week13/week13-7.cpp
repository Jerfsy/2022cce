#include <stdio.h>
#include <stdlib.h>
int main()

{
	int m,n=0,i,N;
	char a[100];
	for(int i=0; i< 10; i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			N=i;
			break;
		}
	}
	scanf("%d",&m);
	for(int i=0; i<N; i++){
		if(a[i]==m) n++;
	}
	printf("%d\n",n);
}
