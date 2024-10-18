#include <stdio.h>

int main()
{
	int k, z, s;
	printf("一つ目の数字を教えて");
	scanf("%d",&k);
	
	printf("二つ目の数字を教えて");
	scanf("%d",&z);
	
	s = k + z;
	
	printf("足し算の結果  %d\n",s);
	return 0;
}
