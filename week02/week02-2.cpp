#include <stdio.h>
int main()
{
	long long int a, b;

	while(scanf("%d%d", &a, &b)==2){
	int ans = a - b ;
		if (ans<0) ans = b - a;
		printf("%d\n",ans);
	}
}
