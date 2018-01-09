#include <stdio.h>

int main(void) {
      int n;
      scanf("%d",&n);
      int a[20],i;
      for(i=0;n>0;i++)
      {
      	a[i]=n%2;
      	n=n/2;
      }
      for(i=i-1;i>=0;i--)
      {
      	if(a[i]==1 || a[i]==0)
      	printf("%d",a[i]);
      	else
      	{
      		printf("error");
      		break;
      	}
      }
	return 0;
}
