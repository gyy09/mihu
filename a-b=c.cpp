#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[10000010];
int main()
{
	int n,c,m=0;
	
	scanf("%d%d",&n,&c);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		if(a[i+1]-a[i]==1)
		{
			m++;
		}
	}
	
	printf("%d",m);
	return 0;
}
